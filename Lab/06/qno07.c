#include<stdio.h>
int main(){
	
	int arr[1000],sum=0,size;
	int i;
	printf("enter size of array :");
	scanf("%d",&size);
	for(i=1;i<=size;i++){
		printf("enter elements :");
		scanf("%d",&arr[i]);
		sum = arr[i]+sum;
	}//end for loop
	printf("\n Sum of elements are : %d",sum);
	
	return 0;
}//end 
