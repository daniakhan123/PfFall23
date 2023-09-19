#include<stdio.h>
int main(){
	float op1,op2;
	char operation ;
	printf("Enter operand 1: ");
	scanf("%f",&op1);
	
	printf("Enter operand 2: ");
	scanf("%f",&op2);
	printf("enter operation :");
	scanf(" %c",&operation);
	
	switch(operation){
		case '+' :
		 	printf("addition of two operands is %f :",op1+op2);
		 	break;
		case '-' :
		 	printf("subtraction of two operands is %f :",op1-op2);
		 	break;
		case '*' :
		 	printf("multiplication of two operands is %f :",op1*op2);
		 	break;
		case '/' :
		 	printf("division of two operands is %f :",op1/op2);
		 	break;
		default :
			printf("invalid operation");
	}
	return 0;
}
