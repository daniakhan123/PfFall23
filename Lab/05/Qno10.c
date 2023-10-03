#include <stdio.h>

int main()
{
    int bits,n,a,b;
    printf("please enter a 8 bit number : ");
     scanf("%d",&bits);
     	 a =bits>>4;// number will be right shifted
    	b =bits<<4;// number will be left shifted
    	n = a | b;// this will add lower to the higher with out changing the bits
    printf("number after replacing its bits is : %d", n);
    return 0;
}//end main
