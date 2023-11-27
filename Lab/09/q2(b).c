#include<stdio.h>

int mul(a,b){
	if(b==1)
	return a;
	else
	return a+mul(a,b-1);
}
int main(){
	int n,N;
	printf ("Enter 1st number");
	scanf ("%d" ,&n);
	printf ("Enter 2nd number");
	scanf ("%d", &N);	
	int product = mul (n,N);
	printf("%d",product);
	
	
	return 0;
}
