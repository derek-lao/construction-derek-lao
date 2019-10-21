all: functions.o main.o
	gcc -o structtest.exe main.o functions.o

functions.o: functions.c food.h
	gcc -c functions.c

main.o: main.c food.h
	gcc -c main.c

run:
	./structtest.exe

clean:
	rm *.o
	rm *~
