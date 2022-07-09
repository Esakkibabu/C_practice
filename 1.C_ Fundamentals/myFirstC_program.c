/*First Program */
#include<stdio.h> 			// preprocessor section

int add(void);				// function prototype		
	
int a=4,b=2;				 // Global Variable

void main()					 // Main function 
{
	int result; 			// Local Variable
	result=add(); 			// Execution part
	printf("Result value :%d\n",result);
}

int add() 					// sub program section
{
	int sum;
	sum= a+b;
	return sum;
}


// Result value :6