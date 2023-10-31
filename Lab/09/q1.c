//programmer dania khan
//date : 31-10-23
//description : swapping by using pointers

#include<stdio.h>
void swap(int *a , int *b){
	int temp = *a;
		*a=*b;
		*b=temp;
}


int main(){
	int j=2,k=5;
	printf("j=%d , k=%d \n ",j,k);
	swap(&j,&k);
	printf("j=%d , k=%d \n",j,k);
	
	return 0;
}
