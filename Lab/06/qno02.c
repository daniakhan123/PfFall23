#include<stdio.h>
int main(){
	
	int i=0,j=1,k,num,sum=0;
	

	printf("%d",j);
	
	 for(k=2;k<10000;++k)
 {    	k=i+j;
  		printf(" %d",k);    
  			i=j;    
  			j=k;  	     
 		if(k%3==0||k%5==0||k%7==0){
 		sum = k + sum;
 	}
 }
 	printf("\n sum of numbers divisible by 3 or 5 or 7 is : %d",sum);
	return 0;
}
