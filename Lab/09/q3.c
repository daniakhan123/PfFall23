#include<stdio.h>
int main(){
	
	int N,i;
	
	printf("enter size of an array : ");
	scanf("%d",&N);
	
	int arr[N];
	char arr2[N];
	long long int arr3[N];
	
		
	for(i=0;i<N;i++){
		printf("\nenter elemts of an int array: ");
		scanf("%d",&arr[i]);
		arr[i]=i;
	}
	
	for(i=0;i<N;i++){
		printf("\nenter elemts of an char array : ");
		scanf("%c ",&arr2[i]);
	}
			for(i=0;i<N;i++){
		printf("\nenter elemts of an long long int array: ");
		scanf("%lld ",&arr3[i]);
		arr3[N];
		
	
	}
		for(i=0;i<N;i++){
		printf("\nelemts of an int array : ");
		printf("%d",*(arr+i),arr+i);}
			for(i=0;i<N;i++){
		printf("\nelemts of an char array : ");
		printf("\t%c ",*(arr2+i),(arr2+i));}
			for(i=0;i<N;i++){	
				printf("\nelemts of an long long int array : ");
		printf("\t%lld",*(arr3+i),(arr3+i));
	
	}
		
	return 0;
	

