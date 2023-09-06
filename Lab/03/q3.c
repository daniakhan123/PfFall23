#include<stdio.h>
int main (){
 	float side1;
 	float side2;
 	float hyp;
 	printf("enter side 1:");
 	scanf("%f",&side1);
 	
 	printf("enter side 2:");
 	scanf("%f",&side2);
 	
 	hyp = sqrt(side1*side2 + side1*side2);
 	printf("the hypotenuse of given number is %f:",hyp);
}
