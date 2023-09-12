#include<stdio.h>
int main(){
	int n ;
	printf("input Number ");
	scanf("%d",&n);
	
	int i=0;
	while(i<n){
	int j=0;
	  while(j<=n){
	     printf("*");
		j=j+1;
		}
	printf("\n");
	i=i+1;
	}
	return 0;
}
	
