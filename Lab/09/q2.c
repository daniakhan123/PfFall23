//Programmer dania khan
//Date 31-10-23
//Descriptiom reversing Array

#include<stdio.h>
void reverse(int arr[],int size){
	int *a = arr;
	int *b =arr + size - 1;
	
	while(a<b){
		int temp = *a;
		*a=*b;
		*b=temp;
		a++;
		b--;
	}
}
int main(){
	int arr[10],i;
		printf("enter elemnts of an array :");
	for(i=0;i<10;i++){
		scanf("%d",&arr[i]);
	}
	
	printf("\n");
	
	reverse(arr,10);
	
	printf("reverse array ");
	for(i=0;i<10;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}
