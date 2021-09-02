all:bin/capitulo_1/myprog1 bin/capitulo_2/2.1/myprog2 \
bin/capitulo_2/2.2/myprog3 bin/capitulo_2/2.3/myprog4 \
bin/capitulo_2/2.4/myprog5 bin/capitulo_2/2.5/myprog6 \
bin/capitulo_2/2.6/myprog7 bin/capitulo_2/2.9/myprog10 \
bin/capitulo_3/3.1/myprog11 bin/capitulo_3/3.2/myprog12 \
bin/capitulo_3/3.3/myprog13 bin/capitulo_3/3.4/myprog14\
bin/capitulo_3/3.5/myprog15 bin/capitulo_3/3.6/myprog16\
bin/capitulo_3/3.7/myprog17 bin/capitulo_4/4.1/myprog18\


#listing1.1 1.2 1.3
bin/capitulo_1/myprog1: src/capitulo_1/1.1/main.o src/capitulo_1/1.1/reciprocal.o
	g++ src/capitulo_1/1.1/main.o src/capitulo_1/1.1/reciprocal.o -o bin/capitulo_1/myprog1 

src/capitulo_1/1.1/main.o: src/capitulo_1/1.1/main.c src/capitulo_1/1.1/reciprocal.cpp src/capitulo_1/1.1/reciprocal.hpp
	gcc -c src/capitulo_1/1.1/main.c -o src/capitulo_1/1.1/main.o
	
src/capitulo_1/1.1/reciprocal.o: src/capitulo_1/1.1/reciprocal.cpp src/capitulo_1/1.1/reciprocal.hpp
	g++ -c src/capitulo_1/1.1/reciprocal.cpp -o src/capitulo_1/1.1/reciprocal.o

#listing2.1
bin/capitulo_2/2.1/myprog2: src/capitulo_2/2.1/main2.o
	gcc src/capitulo_2/2.1/main2.o -o bin/capitulo_2/2.1/myprog2

src/capitulo_2/2.1/main2.o: src/capitulo_2/2.1/main2.c
	gcc -c src/capitulo_2/2.1/main2.c -o src/capitulo_2/2.1/main2.o

#listing2.2
bin/capitulo_2/2.2/myprog3: src/capitulo_2/2.2/getopt_long.o
	gcc src/capitulo_2/2.2/getopt_long.o -o bin/capitulo_2/2.2/myprog3

src/capitulo_2/2.2/getopt_long.o: src/capitulo_2/2.2/getopt_long.c
	gcc -c src/capitulo_2/2.2/getopt_long.c -o src/capitulo_2/2.2/getopt_long.o

#listing2.3
bin/capitulo_2/2.3/myprog4: src/capitulo_2/2.3/print-env.o
	gcc src/capitulo_2/2.3/print-env.o -o bin/capitulo_2/2.3/myprog4

src/capitulo_2/2.3/print-env.o: src/capitulo_2/2.3/print-env.c
	gcc -c src/capitulo_2/2.3/print-env.c -o src/capitulo_2/2.3/print-env.o

#listing2.4
bin/capitulo_2/2.4/myprog5: src/capitulo_2/2.4/client.o
	gcc src/capitulo_2/2.4/client.o -o bin/capitulo_2/2.4/myprog5

src/capitulo_2/2.4/client.o: src/capitulo_2/2.4/client.c
	gcc -c src/capitulo_2/2.4/client.c -o src/capitulo_2/2.4/client.o

#listing2.5
bin/capitulo_2/2.5/myprog6: src/capitulo_2/2.5/temp_file.o
	gcc src/capitulo_2/2.5/temp_file.o -o bin/capitulo_2/2.5/myprog6

src/capitulo_2/2.5/temp_file.o: src/capitulo_2/2.5/temp_file.c
	gcc -c src/capitulo_2/2.5/temp_file.c -o src/capitulo_2/2.5/temp_file.o

#listing2.6
bin/capitulo_2/2.6/myprog7: src/capitulo_2/2.6/readfile.o
	gcc src/capitulo_2/2.6/readfile.o -o bin/capitulo_2/2.5/myprog7

src/capitulo_2/2.6/readfile.o: src/capitulo_2/2.6/readfile.c
	gcc -c src/capitulo_2/2.6/readfile.c -o src/capitulo_2/2.6/readfile.o

#listing2.7
#myprog8: src/capitulo_2/2.8/app.o src/capitulo_2/2.7/test.o
#	gcc src/capitulo_2/2.8/app.o src/capitulo_2/2.7/test.o -o myprog8

#src/capitulo_2/2.7/test.o: src/capitulo_2/2.7/test.c src/capitulo_2/2.8/app.c
#	gcc -c src/capitulo_2/2.7/test.c -o src/capitulo_2/2.7/test.o

#src/capitulo_2/2.8/app.o: src/capitulo_2/2.8/app.c src/capitulo_2/2.7/test.
#	gcc -c src/capitulo_2/2.8/app.c -o src/capitulo_2/2.8/app.o


#listing2.9
bin/capitulo_2/2.9/myprog10: src/capitulo_2/2.9/tifftest.o 
	gcc src/capitulo_2/2.9/tifftest.o -o bin/capitulo_2/2.9/myprog10 -ltiff

src/capitulo_2/2.9/tifftest.o: src/capitulo_2/2.9/tifftest.c
	gcc -c src/capitulo_2/2.9/tifftest.c -o src/capitulo_2/2.9/tifftest.o 

#listing3.1
bin/capitulo_3/3.1/myprog11: src/capitulo_3/3.1/print-pid.o
	gcc src/capitulo_3/3.1/print-pid.o -o bin/capitulo_3/3.1/myprog11

src/capitulo_3/3.1/print-pid.o: src/capitulo_3/3.1/print-pid.c
	gcc -c src/capitulo_3/3.1/print-pid.c -o src/capitulo_3/3.1/print-pid.o

#listing3.2
bin/capitulo_3/3.2/myprog12: src/capitulo_3/3.2/system.o
	gcc src/capitulo_3/3.2/system.o -o bin/capitulo_3/3.2/myprog12

src/capitulo_3//readfile.o: src/capitulo_3/3.2/system.c
	gcc -c src/capitulo_3/3.2/system.c -o src/capitulo_3/3.2/system.o

#listing3.3
bin/capitulo_3/3.3/myprog13: src/capitulo_3/3.3/fork.o
	gcc src/capitulo_3/3.3/fork.o -o bin/capitulo_3/3.3/myprog13

src/capitulo_3/3.3/fork.o: src/capitulo_3/3.3/fork.c
	gcc -c src/capitulo_3/3.3/fork.c -o src/capitulo_3/3.3/fork.o

#listing3.4

bin/capitulo_3/3.4/myprog14: src/capitulo_3/3.4/fork-exec.o
	gcc src/capitulo_3/3.4/fork-exec.o -o bin/capitulo_3/3.4/myprog14

src/capitulo_3/3.4/fork-exec.o: src/capitulo_3/3.4/fork-exec.c
	gcc -c src/capitulo_3/3.4/fork-exec.c -o src/capitulo_3/3.4/fork-exec.o

#listing3.5
bin/capitulo_3/3.5/myprog15: src/capitulo_3/3.5/sigusr1.o
	gcc src/capitulo_3/3.5/sigusr1.o -o bin/capitulo_3/3.5/myprog15

src/capitulo_3/3.5/sigusr1.o: src/capitulo_3/3.5/sigusr1.c	
	gcc -c src/capitulo_3/3.5/sigusr1.c -o src/capitulo_3/3.5/sigusr1.o

#listing3.6
bin/capitulo_3/3.6/myprog16: src/capitulo_3/3.6/zombie.o
	gcc src/capitulo_3/3.6/zombie.o -o bin/capitulo_3/3.6/myprog16

src/capitulo_3/3.6/zombie.o: src/capitulo_3/3.6/zombie.c      
	gcc -c src/capitulo_3/3.6/zombie.c -o src/capitulo_3/3.6/zombie.o

#listing3.7
bin/capitulo_3/3.7/myprog17: src/capitulo_3/3.7/sigchld.o
	gcc src/capitulo_3/3.7/sigchld.o -o bin/capitulo_3/3.7/myprog17

src/capitulo_3/3.7/sigchld.o: src/capitulo_3/3.7/sigchld.c      
	gcc -c src/capitulo_3/3.7/sigchld.c -o src/capitulo_3/3.7/sigchld.o

#listing4.1
bin/capitulo_4/4.1/myprog18: src/capitulo_4/4.1/thread-create.o
	gcc src/capitulo_4/4.1/thread-create.o -o bin/capitulo_4/4.1/myprog18 -lpthread

src/capitulo_4/4.1/thread-create.o: src/capitulo_4/4.1/thread-create.c      
	gcc -c src/capitulo_4/4.1/thread-create.c -o src/capitulo_4/4.1/thread-create.o