#include<stdio.h>
int main(){
	
	float discriminant,a,b,c;
	printf("Enter coeffiecient of a :");
	scanf("%f",&a);
	printf("Enter coeffiecient of b :");
	scanf("%f",&b);
	printf("Enter constand c :");
	scanf("%f",&c);
	
	discriminant=b*b-(4*a*c);
	printf("dicriminant is : %f", discriminant);
	
	return 0;
}
