#include<stdio.h>
int main (){
	int percentage = 20;
	int Originalprice = 1500;
	int saleprice ;
	saleprice= Originalprice-(Originalprice*percentage/100);
	printf("sale price %d",saleprice);
	return 0 ;
	
}
