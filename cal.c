/*We call the .h files we created usung the gcc -c in the Main as below.. As the main excecutes, it reads the header files we have called and then goes and excecutes the apparent c files*/

#include <stdio.h> 
#include "add.h"
#include "subtract.h"
#include "multiply.h"
#include "divide.h"
 
int k;

int main()
{
	printf("For addition enter 1\nFor Subtraction enter 2\nFor Multiplication enter 3\nFor Division enter 4\n");
		
	scanf("%d", &k);
	switch(k)
	{
	case 1 : printf("Addition\n"); 
		 int addition = add();
	break;

	case 2 : printf("Subtraction\n"); 
		 int subtraction = subtract();
	break;

	case 3 : printf("Multiply\n"); 
		 int multiplication = multiply();
	break;

	case 4 : printf("Divide\n"); 
		 int division = divide();
	break;
	}
}

