all:bin/capitulo_1/myprog1 bin/capitulo_2/2.1/myprog2 \
bin/capitulo_2/2.2/myprog3 bin/capitulo_2/2.3/myprog4 \
bin/capitulo_2/2.4/myprog5 bin/capitulo_2/2.5/myprog6 \
bin/capitulo_2/2.6/myprog7 libtest.a\
bin/capitulo_2/2.8/myprog8 bin/capitulo_2/2.9/myprog10 \
bin/capitulo_3/3.1/myprog11 bin/capitulo_3/3.2/myprog12 \
bin/capitulo_3/3.3/myprog13 bin/capitulo_3/3.4/myprog14\
bin/capitulo_3/3.5/myprog15 bin/capitulo_3/3.6/myprog16\
bin/capitulo_3/3.7/myprog17 bin/capitulo_4/4.1/myprog18\
bin/capitulo_4/4.2/myprog19 bin/capitulo_4/4.3/myprog20\
bin/capitulo_4/4.4/myprog21 bin/capitulo_4/4.5/myprog22\
bin/capitulo_4/4.6/myprog23 bin/capitulo_4/4.7/myprog24\
bin/capitulo_4/4.8/myprog25 bin/capitulo_4/4.9/myprog26\
bin/capitulo_4/4.10/myprog27 bin/capitulo_4/4.11/myprog28\
bin/capitulo_4/4.12/myprog29 bin/capitulo_4/4.13/myprog30\
bin/capitulo_4/4.14/myprog31 bin/capitulo_4/4.15/myprog32\
bin/capitulo_5/5.1/myprog33 bin/capitulo_5/5.2/myprog34\
bin/capitulo_5/5.3/myprog35 bin/capitulo_5/5.4/myprog36\
bin/capitulo_5/5.5/myprog37 bin/capitulo_5/5.6/myprog38\
bin/capitulo_5/5.7/myprog39 bin/capitulo_5/5.8/myprog40\
bin/capitulo_5/5.9/myprog41 bin/capitulo_5/5.10/myprog42\
bin/capitulo_5/5.11/myprog43 bin/capitulo_5/5.12/myprog44\


#listing1.1 1.2 1.3

listing-1.1:bin/capitulo_1/myprog1

bin/capitulo_1/myprog1: src/capitulo_1/main.o src/capitulo_1/reciprocal.o
	g++ src/capitulo_1/main.o src/capitulo_1/reciprocal.o -o bin/capitulo_1/myprog1 

src/capitulo_1/main.o: src/capitulo_1/main.c src/capitulo_1/reciprocal.cpp src/capitulo_1/reciprocal.hpp
	gcc -c src/capitulo_1/main.c -o src/capitulo_1/main.o
	
src/capitulo_1/reciprocal.o: src/capitulo_1/reciprocal.cpp src/capitulo_1/reciprocal.hpp
	g++ -c src/capitulo_1/reciprocal.cpp -o src/capitulo_1/reciprocal.o

#listing2.1

listing-2.1:bin/capitulo_2/2.1/myprog2

bin/capitulo_2/2.1/myprog2: src/capitulo_2/2.1/main2.o
	gcc src/capitulo_2/2.1/main2.o -o bin/capitulo_2/2.1/myprog2

src/capitulo_2/2.1/main2.o: src/capitulo_2/2.1/main2.c
	gcc -c src/capitulo_2/2.1/main2.c -o src/capitulo_2/2.1/main2.o

#listing2.2

listing-2.2:bin/capitulo_2/2.2/myprog3

bin/capitulo_2/2.2/myprog3: src/capitulo_2/2.2/getopt_long.o
	gcc src/capitulo_2/2.2/getopt_long.o -o bin/capitulo_2/2.2/myprog3

src/capitulo_2/2.2/getopt_long.o: src/capitulo_2/2.2/getopt_long.c
	gcc -c src/capitulo_2/2.2/getopt_long.c -o src/capitulo_2/2.2/getopt_long.o

#listing2.3

listing-2.3:bin/capitulo_2/2.3/myprog4

bin/capitulo_2/2.3/myprog4: src/capitulo_2/2.3/print-env.o
	gcc src/capitulo_2/2.3/print-env.o -o bin/capitulo_2/2.3/myprog4

src/capitulo_2/2.3/print-env.o: src/capitulo_2/2.3/print-env.c
	gcc -c src/capitulo_2/2.3/print-env.c -o src/capitulo_2/2.3/print-env.o

#listing2.4

listing-2.4:bin/capitulo_2/2.4/myprog5

bin/capitulo_2/2.4/myprog5: src/capitulo_2/2.4/client.o
	gcc src/capitulo_2/2.4/client.o -o bin/capitulo_2/2.4/myprog5

src/capitulo_2/2.4/client.o: src/capitulo_2/2.4/client.c
	gcc -c src/capitulo_2/2.4/client.c -o src/capitulo_2/2.4/client.o

#listing2.5

listing-2.5:bin/capitulo_2/2.5/myprog6

bin/capitulo_2/2.5/myprog6: src/capitulo_2/2.5/temp_file.o
	gcc src/capitulo_2/2.5/temp_file.o -o bin/capitulo_2/2.5/myprog6

src/capitulo_2/2.5/temp_file.o: src/capitulo_2/2.5/temp_file.c
	gcc -c src/capitulo_2/2.5/temp_file.c -o src/capitulo_2/2.5/temp_file.o

#listing2.6

listing-2.6:bin/capitulo_2/2.6/myprog7

bin/capitulo_2/2.6/myprog7: src/capitulo_2/2.6/readfile.o
	gcc src/capitulo_2/2.6/readfile.o -o bin/capitulo_2/2.6/myprog7

src/capitulo_2/2.6/readfile.o: src/capitulo_2/2.6/readfile.c
	gcc -c src/capitulo_2/2.6/readfile.c -o src/capitulo_2/2.6/readfile.o

#listing2.7-2.8

libtest.a: src/capitulo_2/2.7/test.o src/capitulo_2/2.7/test1.o
	ar cr libtest.a src/capitulo_2/2.7/test.o src/capitulo_2/2.7/test1.o

src/capitulo_2/2.7/test.o: src/capitulo_2/2.7/test.c
	gcc -c src/capitulo_2/2.7/test.c -o src/capitulo_2/2.7/test.o

src/capitulo_2/2.7/test1.o: src/capitulo_2/2.7/test1.c
	gcc -c src/capitulo_2/2.7/test1.c -o src/capitulo_2/2.7/test1.o

listing-2.8:bin/capitulo_2/2.8/myprog8

bin/capitulo_2/2.8/myprog8: src/capitulo_2/2.8/app.o libtest.a
	gcc src/capitulo_2/2.8/app.o -o bin/capitulo_2/2.8/myprog8 -L. -ltest

src/capitulo_2/2.8/app.o: src/capitulo_2/2.8/app.c libtest.a
	gcc -c src/capitulo_2/2.8/app.c -o src/capitulo_2/2.8/app.o -L. -ltest

#listing2.9

listing-2.9:bin/capitulo_2/2.9/myprog10

bin/capitulo_2/2.9/myprog10: src/capitulo_2/2.9/tifftest.o 
	gcc src/capitulo_2/2.9/tifftest.o -o bin/capitulo_2/2.9/myprog10 -ltiff

src/capitulo_2/2.9/tifftest.o: src/capitulo_2/2.9/tifftest.c
	gcc -c src/capitulo_2/2.9/tifftest.c -o src/capitulo_2/2.9/tifftest.o 

#listing3.1

listing-3.1:bin/capitulo_3/3.1/myprog11

bin/capitulo_3/3.1/myprog11: src/capitulo_3/3.1/print-pid.o
	gcc src/capitulo_3/3.1/print-pid.o -o bin/capitulo_3/3.1/myprog11

src/capitulo_3/3.1/print-pid.o: src/capitulo_3/3.1/print-pid.c
	gcc -c src/capitulo_3/3.1/print-pid.c -o src/capitulo_3/3.1/print-pid.o

#listing3.2

listing-3.2:bin/capitulo_3/3.2/myprog12

bin/capitulo_3/3.2/myprog12: src/capitulo_3/3.2/system.o
	gcc src/capitulo_3/3.2/system.o -o bin/capitulo_3/3.2/myprog12

src/capitulo_3/3.2/readfile.o: src/capitulo_3/3.2/system.c
	gcc -c src/capitulo_3/3.2/system.c -o src/capitulo_3/3.2/system.o

#listing3.3

listing-3.3:bin/capitulo_3/3.3/myprog13

bin/capitulo_3/3.3/myprog13: src/capitulo_3/3.3/fork.o
	gcc src/capitulo_3/3.3/fork.o -o bin/capitulo_3/3.3/myprog13

src/capitulo_3/3.3/fork.o: src/capitulo_3/3.3/fork.c
	gcc -c src/capitulo_3/3.3/fork.c -o src/capitulo_3/3.3/fork.o

#listing3.4

listing-3.4:bin/capitulo_3/3.4/myprog14

bin/capitulo_3/3.4/myprog14: src/capitulo_3/3.4/fork-exec.o
	gcc src/capitulo_3/3.4/fork-exec.o -o bin/capitulo_3/3.4/myprog14

src/capitulo_3/3.4/fork-exec.o: src/capitulo_3/3.4/fork-exec.c
	gcc -c src/capitulo_3/3.4/fork-exec.c -o src/capitulo_3/3.4/fork-exec.o

#listing3.5

listing-3.5:bin/capitulo_3/3.5/myprog15

bin/capitulo_3/3.5/myprog15: src/capitulo_3/3.5/sigusr1.o
	gcc src/capitulo_3/3.5/sigusr1.o -o bin/capitulo_3/3.5/myprog15

src/capitulo_3/3.5/sigusr1.o: src/capitulo_3/3.5/sigusr1.c	
	gcc -c src/capitulo_3/3.5/sigusr1.c -o src/capitulo_3/3.5/sigusr1.o

#listing3.6

listing-3.6:bin/capitulo_3/3.6/myprog16

bin/capitulo_3/3.6/myprog16: src/capitulo_3/3.6/zombie.o
	gcc src/capitulo_3/3.6/zombie.o -o bin/capitulo_3/3.6/myprog16

src/capitulo_3/3.6/zombie.o: src/capitulo_3/3.6/zombie.c      
	gcc -c src/capitulo_3/3.6/zombie.c -o src/capitulo_3/3.6/zombie.o

#listing3.7

listing-3.7:bin/capitulo_3/3.7/myprog17

bin/capitulo_3/3.7/myprog17: src/capitulo_3/3.7/sigchld.o
	gcc src/capitulo_3/3.7/sigchld.o -o bin/capitulo_3/3.7/myprog17

src/capitulo_3/3.7/sigchld.o: src/capitulo_3/3.7/sigchld.c      
	gcc -c src/capitulo_3/3.7/sigchld.c -o src/capitulo_3/3.7/sigchld.o

#listing4.1

listing-4.1:bin/capitulo_4/4.1/myprog18

bin/capitulo_4/4.1/myprog18: src/capitulo_4/4.1/thread-create.o
	gcc src/capitulo_4/4.1/thread-create.o -o bin/capitulo_4/4.1/myprog18 -lpthread

src/capitulo_4/4.1/thread-create.o: src/capitulo_4/4.1/thread-create.c      
	gcc -c src/capitulo_4/4.1/thread-create.c -o src/capitulo_4/4.1/thread-create.o

#listing4.2

listing-4.2:bin/capitulo_4/4.2/myprog19

bin/capitulo_4/4.2/myprog19: src/capitulo_4/4.2/thread-create2.o
	gcc src/capitulo_4/4.2/thread-create2.o -o bin/capitulo_4/4.2/myprog19 -lpthread

src/capitulo_4/4.2/thread-create2.o: src/capitulo_4/4.2/thread-create2.c      
	gcc -c src/capitulo_4/4.2/thread-create2.c -o src/capitulo_4/4.2/thread-create2.o

#listing4.3

listing-4.3:bin/capitulo_4/4.3/myprog20

bin/capitulo_4/4.3/myprog20: src/capitulo_4/4.3/revised4.2.o
	gcc src/capitulo_4/4.3/revised4.2.o -o bin/capitulo_4/4.3/myprog20 -lpthread

src/capitulo_4/4.3/revised4.2.o: src/capitulo_4/4.3/revised4.2.c      
	gcc -c src/capitulo_4/4.3/revised4.2.c -o src/capitulo_4/4.3/revised4.2.o	

#listing4.4

listing-4.4:bin/capitulo_4/4.4/myprog21

bin/capitulo_4/4.4/myprog21: src/capitulo_4/4.4/primes.o
	gcc src/capitulo_4/4.4/primes.o -o bin/capitulo_4/4.4/myprog21 -lpthread

src/capitulo_4/4.4/primes.o: src/capitulo_4/4.4/primes.c      
	gcc -c src/capitulo_4/4.4/primes.c -o src/capitulo_4/4.4/primes.o

#listing4.5

listing-4.5:bin/capitulo_4/4.5/myprog22

bin/capitulo_4/4.5/myprog22: src/capitulo_4/4.5/detached.o
	gcc src/capitulo_4/4.5/detached.o -o bin/capitulo_4/4.5/myprog22 -lpthread

src/capitulo_4/4.5/detached.o: src/capitulo_4/4.5/detached.c      
	gcc -c src/capitulo_4/4.5/detached.c -o src/capitulo_4/4.5/detached.o

#listing4.6

listing-4.6:bin/capitulo_4/4.6/myprog23

bin/capitulo_4/4.6/myprog23: src/capitulo_4/4.6/critical-section.o
	gcc src/capitulo_4/4.6/critical-section.o -o bin/capitulo_4/4.6/myprog23 -lpthread

src/capitulo_4/4.6/critical-section.o: src/capitulo_4/4.6/critical-section.c      
	gcc -c src/capitulo_4/4.6/critical-section.c -o src/capitulo_4/4.6/critical-section.o

#listing4.7

listing-4.7:bin/capitulo_4/4.7/myprog24

bin/capitulo_4/4.7/myprog24: src/capitulo_4/4.7/tsd.o
	gcc src/capitulo_4/4.7/tsd.o -o bin/capitulo_4/4.7/myprog24 -lpthread

src/capitulo_4/4.7/tsd.o: src/capitulo_4/4.7/tsd.c      
	gcc -c src/capitulo_4/4.7/tsd.c -o src/capitulo_4/4.7/tsd.o

#listing4.8

listing-4.8:bin/capitulo_4/4.8/myprog25

bin/capitulo_4/4.8/myprog25: src/capitulo_4/4.8/cleanup.o
	gcc src/capitulo_4/4.8/cleanup.o -o bin/capitulo_4/4.8/myprog25 -lpthread

src/capitulo_4/4.8/cleanup.o: src/capitulo_4/4.8/cleanup.c      
	gcc -c src/capitulo_4/4.8/cleanup.c -o src/capitulo_4/4.8/cleanup.o

#listing4.9

listing-4.9:bin/capitulo_4/4.9/myprog26

bin/capitulo_4/4.9/myprog26: src/capitulo_4/4.9/cxx-exit.o
	g++ src/capitulo_4/4.9/cxx-exit.o -o bin/capitulo_4/4.9/myprog26 -lpthread

src/capitulo_4/4.9/cxx-exit.o: src/capitulo_4/4.9/cxx-exit.cpp      
	g++ -c src/capitulo_4/4.9/cxx-exit.cpp -o src/capitulo_4/4.9/cxx-exit.o

#listing4.10

listing-4.10:bin/capitulo_4/4.10/myprog27

bin/capitulo_4/4.10/myprog27: src/capitulo_4/4.10/job-queue1.o
	gcc src/capitulo_4/4.10/job-queue1.o -o bin/capitulo_4/4.10/myprog27 -lpthread

src/capitulo_4/4.10/job-queue1.o: src/capitulo_4/4.10/job-queue1.c      
	gcc -c src/capitulo_4/4.10/job-queue1.c -o src/capitulo_4/4.10/job-queue1.o

#listing4.11

listing-4.11:bin/capitulo_4/4.11/myprog28

bin/capitulo_4/4.11/myprog28: src/capitulo_4/4.11/job-queue2.o
	gcc src/capitulo_4/4.11/job-queue2.o -o bin/capitulo_4/4.11/myprog28 -lpthread

src/capitulo_4/4.11/job-queue2.o: src/capitulo_4/4.11/job-queue2.c      
	gcc -c src/capitulo_4/4.11/job-queue2.c -o src/capitulo_4/4.11/job-queue2.o

#listing4.12

listing-4.12:bin/capitulo_4/4.12/myprog29

bin/capitulo_4/4.12/myprog29: src/capitulo_4/4.12/job-queue3.o
	gcc src/capitulo_4/4.12/job-queue3.o -o bin/capitulo_4/4.12/myprog29 -lpthread

src/capitulo_4/4.12/job-queue3.o: src/capitulo_4/4.12/job-queue3.c      
	gcc -c src/capitulo_4/4.12/job-queue3.c -o src/capitulo_4/4.12/job-queue3.o

#listing4.13

listing-4.13:bin/capitulo_4/4.13/myprog30

bin/capitulo_4/4.13/myprog30: src/capitulo_4/4.13/spin-condvar.o
	gcc src/capitulo_4/4.13/spin-condvar.o -o bin/capitulo_4/4.13/myprog30 -lpthread

src/capitulo_4/4.13/spin-condvar.o: src/capitulo_4/4.13/spin-condvar.c      
	gcc -c src/capitulo_4/4.13/spin-condvar.c -o src/capitulo_4/4.13/spin-condvar.o

#listing4.14

listing-4.14:bin/capitulo_4/4.14/myprog31

bin/capitulo_4/4.14/myprog31: src/capitulo_4/4.14/condvar.o
	gcc src/capitulo_4/4.14/condvar.o -o bin/capitulo_4/4.14/myprog31 -lpthread

src/capitulo_4/4.14/condvar.o: src/capitulo_4/4.14/condvar.c      
	gcc -c src/capitulo_4/4.14/condvar.c -o src/capitulo_4/4.14/condvar.o

#listing4.15

listing-4.15:bin/capitulo_4/4.15/myprog32

bin/capitulo_4/4.15/myprog32: src/capitulo_4/4.15/thread-pid.o
	gcc src/capitulo_4/4.15/thread-pid.o -o bin/capitulo_4/4.15/myprog32 -lpthread

src/capitulo_4/4.15/thread-pid.o: src/capitulo_4/4.15/thread-pid.c      
	gcc -c src/capitulo_4/4.15/thread-pid.c -o src/capitulo_4/4.15/thread-pid.o

#listing5.1

listing-5.1:bin/capitulo_5/5.1/myprog33

bin/capitulo_5/5.1/myprog33: src/capitulo_5/5.1/shm.o
	gcc src/capitulo_5/5.1/shm.o -o bin/capitulo_5/5.1/myprog33 -lpthread

src/capitulo_5/5.1/shm.o: src/capitulo_5/5.1/shm.c      
	gcc -c src/capitulo_5/5.1/shm.c -o src/capitulo_5/5.1/shm.o

#listing5.2

listing-5.2:bin/capitulo_5/5.2/myprog34

bin/capitulo_5/5.2/myprog34: src/capitulo_5/5.2/sem_all_deall.o
	gcc src/capitulo_5/5.2/sem_all_deall.o -o bin/capitulo_5/5.2/myprog34 -lpthread

src/capitulo_5/5.2/sem_all_deall.o: src/capitulo_5/5.2/sem_all_deall.c      
	gcc -c src/capitulo_5/5.2/sem_all_deall.c -o src/capitulo_5/5.2/sem_all_deall.o

#listing5.3

listing-5.3:bin/capitulo_5/5.3/myprog35

bin/capitulo_5/5.3/myprog35: src/capitulo_5/5.3/sem_init.o
	gcc src/capitulo_5/5.3/sem_init.o -o bin/capitulo_5/5.3/myprog35 -lpthread

src/capitulo_5/5.3/sem_init.o: src/capitulo_5/5.3/sem_init.c      
	gcc -c src/capitulo_5/5.3/sem_init.c -o src/capitulo_5/5.3/sem_init.o

#listing5.4

listing-5.4:bin/capitulo_5/5.4/myprog36

bin/capitulo_5/5.4/myprog36: src/capitulo_5/5.4/sem_pv.o
	gcc src/capitulo_5/5.4/sem_pv.o -o bin/capitulo_5/5.4/myprog36 -lpthread

src/capitulo_5/5.4/sem_pv.o: src/capitulo_5/5.4/sem_pv.c      
	gcc -c src/capitulo_5/5.4/sem_pv.c -o src/capitulo_5/5.4/sem_pv.o

#listing5.5

listing-5.5:bin/capitulo_5/5.5/myprog37

bin/capitulo_5/5.5/myprog37: src/capitulo_5/5.5/mmap-write.o
	gcc src/capitulo_5/5.5/mmap-write.o -o bin/capitulo_5/5.5/myprog37 -lpthread

src/capitulo_5/5.5/mmap-write.o: src/capitulo_5/5.5/mmap-write.c      
	gcc -c src/capitulo_5/5.5/mmap-write.c -o src/capitulo_5/5.5/mmap-write.o

#listing5.6

listing-5.6:bin/capitulo_5/5.6/myprog38

bin/capitulo_5/5.6/myprog38: src/capitulo_5/5.6/mmap-read.o
	gcc src/capitulo_5/5.6/mmap-read.o -o bin/capitulo_5/5.6/myprog38 -lpthread

src/capitulo_5/5.6/mmap-read.o: src/capitulo_5/5.6/mmap-read.c      
	gcc -c src/capitulo_5/5.6/mmap-read.c -o src/capitulo_5/5.6/mmap-read.o

#listing5.7

listing-5.7:bin/capitulo_5/5.7/myprog39

bin/capitulo_5/5.7/myprog39: src/capitulo_5/5.7/pipe.o
	gcc src/capitulo_5/5.7/pipe.o -o bin/capitulo_5/5.7/myprog39 -lpthread

src/capitulo_5/5.7/pipe.o: src/capitulo_5/5.7/pipe.c      
	gcc -c src/capitulo_5/5.7/pipe.c -o src/capitulo_5/5.7/pipe.o

#listing5.8

listing-5.8:bin/capitulo_5/5.8/myprog40

bin/capitulo_5/5.8/myprog40: src/capitulo_5/5.8/dup2.o
	gcc src/capitulo_5/5.8/dup2.o -o bin/capitulo_5/5.8/myprog40 -lpthread

src/capitulo_5/5.8/dup2.o: src/capitulo_5/5.8/dup2.c      
	gcc -c src/capitulo_5/5.8/dup2.c -o src/capitulo_5/5.8/dup2.o	

#listing5.9

listing-5.9:bin/capitulo_5/5.9/myprog41

bin/capitulo_5/5.9/myprog41: src/capitulo_5/5.9/popen.o
	gcc src/capitulo_5/5.9/popen.o -o bin/capitulo_5/5.9/myprog41 -lpthread

src/capitulo_5/5.9/popen.o: src/capitulo_5/5.9/popen.c      
	gcc -c src/capitulo_5/5.9/popen.c -o src/capitulo_5/5.9/popen.o

#listing5.10

listing-5.10:bin/capitulo_5/5.10/myprog42

bin/capitulo_5/5.10/myprog42: src/capitulo_5/5.10/socket-server.o
	gcc src/capitulo_5/5.10/socket-server.o -o bin/capitulo_5/5.10/myprog42 -lpthread

src/capitulo_5/5.10/socket-server.o: src/capitulo_5/5.10/socket-server.c      
	gcc -c src/capitulo_5/5.10/socket-server.c -o src/capitulo_5/5.10/socket-server.o

#listing5.11

listing-5.11:bin/capitulo_5/5.11/myprog43
	
bin/capitulo_5/5.11/myprog43: src/capitulo_5/5.11/socket-client.o
	gcc src/capitulo_5/5.11/socket-client.o -o bin/capitulo_5/5.11/myprog43 -lpthread

src/capitulo_5/5.11/socket-client.o: src/capitulo_5/5.11/socket-client.c      
	gcc -c src/capitulo_5/5.11/socket-client.c -o src/capitulo_5/5.11/socket-client.o

#listing5.12

listing-5.12:bin/capitulo_5/5.12/myprog44

bin/capitulo_5/5.12/myprog44: src/capitulo_5/5.12/socket-inet.o
	gcc src/capitulo_5/5.12/socket-inet.o -o bin/capitulo_5/5.12/myprog44 -lpthread

src/capitulo_5/5.12/socket-inet.o: src/capitulo_5/5.12/socket-inet.c      
	gcc -c src/capitulo_5/5.12/socket-inet.c -o src/capitulo_5/5.12/socket-inet.o

clean:
	rm bin/capitulo_1/myprog1
	rm bin/capitulo_2/2.1/myprog2
	rm bin/capitulo_2/2.2/myprog3
	rm bin/capitulo_2/2.3/myprog4
	rm bin/capitulo_2/2.4/myprog5
	rm bin/capitulo_2/2.5/myprog6
	rm bin/capitulo_2/2.6/myprog7
	rm bin/capitulo_2/2.8/myprog8
	rm bin/capitulo_2/2.9/myprog10
	rm bin/capitulo_3/3.1/myprog11
	rm bin/capitulo_3/3.2/myprog12
	rm bin/capitulo_3/3.3/myprog13 
	rm bin/capitulo_3/3.4/myprog14
	rm bin/capitulo_3/3.5/myprog15
	rm bin/capitulo_3/3.6/myprog16
	rm bin/capitulo_3/3.7/myprog17
	rm bin/capitulo_4/4.1/myprog18
	rm bin/capitulo_4/4.2/myprog19
	rm bin/capitulo_4/4.3/myprog20
	rm bin/capitulo_4/4.4/myprog21
	rm bin/capitulo_4/4.5/myprog22
	rm bin/capitulo_4/4.6/myprog23 
	rm bin/capitulo_4/4.7/myprog24
	rm bin/capitulo_4/4.8/myprog25 
	rm bin/capitulo_4/4.9/myprog26
	rm bin/capitulo_4/4.10/myprog27
	rm bin/capitulo_4/4.11/myprog28
	rm bin/capitulo_4/4.12/myprog29 
	rm bin/capitulo_4/4.13/myprog30
	rm bin/capitulo_4/4.14/myprog31 
	rm bin/capitulo_4/4.15/myprog32
	rm bin/capitulo_5/5.1/myprog33
	rm bin/capitulo_5/5.2/myprog34
	rm bin/capitulo_5/5.3/myprog35 
	rm bin/capitulo_5/5.4/myprog36
	rm bin/capitulo_5/5.5/myprog37 
	rm bin/capitulo_5/5.6/myprog38
	rm bin/capitulo_5/5.7/myprog39
	rm bin/capitulo_5/5.8/myprog40
	rm bin/capitulo_5/5.9/myprog41 
	rm bin/capitulo_5/5.10/myprog42
	rm bin/capitulo_5/5.11/myprog43
	rm bin/capitulo_5/5.12/myprog44\
