#include<stdio.h>
int main(){
	int number,bit7,bit4;
	
	printf("Enter 8-bit Numbers in 0's and 1's :");
	scanf("%d",&number);
	
	bit4=(number/1000)%10;
	bit7=(number/1000000)%10;
	
	
	if(bit4 && bit7){
		number = number-1000000 - 1000;	
	}
	printf("%d \n",number);
	return 0;
}
