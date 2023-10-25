#include<stdio.h>
int main(){
	
	int arr[100],size,i,max,min;
	printf("enter size of array :");
	scanf("%d",&size);
	 for(i=1;i<=size;i++){
	 	printf("enter elements :");
		scanf("\n %d",&arr[i]);
	}
	max = arr[0];
	 for(i=1;i<=size;i++){
		if(arr[i]>max){
			max= arr[i];	
		}
		min==arr[0];
		if (arr[i]<min){
		    min = arr[i];
		}
	 }
	printf("\n Maximum value is : %d",max);
	printf("\n Minimun value is : %d",min);
	 return 0;
}
