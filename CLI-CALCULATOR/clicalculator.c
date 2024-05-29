#include <stdio.h>
// simple CLI calculator

int main(){
	
	// we need to have 2 vars for the 2 numbers and 1 for the sum 
	double num1;
	double num2;
	double sum;

	// we need 1 char var to store the arithmatic opperator
	char op;

	// ask user from userinput for Arithmatic operator
	printf("Choose Arithmatic Operator> ");
	scanf("%c", &op);

	// ask user from userinput for first number
	printf("Enter Number 1> ");
	scanf("%lf", &num1);

	// ask user from userinput for second number
	printf("Enter Number 2> ");
	scanf("%lf", &num2);
	
	// Switch case for the Operator 
	switch(op){
		case '+': 										// if user chooses +
			sum = num1 + num2;   						// calculate sum using + 
			printf("Result: %.1lf",sum);
			break;										//break the case once finished

		
		case '-':
			sum = num1 - num2;
			printf("Result: %.1lf", sum);
			break;

		case '/':
			sum = num1 / num2;
			printf("Result: %.1lf", sum);
			break;

		case '*':
			sum = num1 * num2;
			printf("Result: %.1lf", sum);
			break;
		

		default:
			printf("%c is not a valid Operator ", op );
}

	return 0; 											// return 0 if nothin goes wrong
}
