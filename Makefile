CC = gcc	
FLAGS = -Wall -g
AR = ar
all: loops recursives recursived loopd mains maindloop maindrec

loops: libclassloops.a
recursives: libclassrec.a
recursived: libclassrec.so
loopd: libclassloops.so

mains: main.o libclassrec.a
	$(CC) $(FLAGS) -o mains.o main.o libclassrec.a
	
maindloop: main.o
	$(CC) $(FLAGS) -o maindloop.o main.o ./libclassloops.so
	
maindrec: main.o
	$(CC) $(FLAGS) -o maindrec.o main.o ./libclassrec.so

libclassloops.a: basicClassification.o advancedClassificationLoop.o
	$(AR) -rcs libclassloops.a basicClassification.o advancedClassificationLoop.o
	
libclassrec.a: basicClassification.o advancedClassificationRecursion.o
	$(AR) -rcs libclassrec.a basicClassification.o advancedClassificationRecursion.o

libclassrec.so: basicClassification.o advancedClassificationRecursion.o
	$(CC) -shared -o libclassrec.so basicClassification.o advancedClassificationRecursion.o
	
libclassloops.so: basicClassification.o advancedClassificationLoop.o
	$(CC) -shared -o libclassloops.so basicClassification.o advancedClassificationLoop.o
	
main.o: main.c NumClass.h
	$(CC) $(FLAGS) -c main.c
	
basicClassification.o: basicClassification.c NumClass.h
	$(CC) $(FLAGS) -c basicClassification.c
	
advancedClassificationLoop.o: advancedClassificationLoop.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationLoop.c
	
advancedClassificationRecursion.o: advancedClassificationRecursion.c NumClass.h
	$(CC) $(FLAGS) -c advancedClassificationRecursion.c
	
.PHONY: clean
clean:
	rm -f *.o *.a *.so $(Prog)
	




	

	
