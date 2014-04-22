
Basic_Calculator: cal.o add.o subtract.o multiply.o divide.o
	gcc cal.o add.o subtract.o multiply.o divide.o -o Basic_Calculator

cal.o: cal.c add.h subtract.h multiply.h divide.h
	gcc -c cal.c

add.o: add.h add.c
	gcc -c add.c

subtract.o: subtract.h subtract.c
	gcc -c subtract.c

multiply.o: multiply.h multiply.c
	gcc -c multiply.c

divide.o: divide.h divide.c
	gcc -c divide.c
      
