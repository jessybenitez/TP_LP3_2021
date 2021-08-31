#include <pthread.h>
#include <stdio.h>
#include <string.h>

float* account_balances;

int process_transaction(int from_acct,int to_acct,float dollars){
	int old_cancel_state;

	if (account_balances[from_acct]<dollars)
	{
		return 1;
	}
	pthread_setcancelstate(PTHREAD_CANCEL_DISABLE,&old_cancel_state);
	account_balances[to_acct]+=dollars;
	account_balances[from_acct]-=dollars;
	pthread_setcancelstate(old_cancel_state,NULL);
	return 0;
}

int main()
{
	int flag;
	float vector[5]={3000,8000,9000,4000,7000};
	account_balances=vector;
	flag=process_transaction(1,2,1000);
	if(flag==0){
		printf("la transaccion ha sido exitosa\n");
		printf("saldo de la cuenta que tranfiere %f\n", account_balances[1]);
		printf("saldo de la cuenta que recibio la transaccion%f\n", account_balances[2]);
	}else{
		printf("saldo insuficiente \n");
	}

	return 0;
}