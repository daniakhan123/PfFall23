///Programmer: Dania Khan
///Date: 10-oct-2023
/// Description : divide numbers without using division operator

#include <stdio.h>

int main()
{
    int x;
    int y;
    printf("please enter 2 numbers to divide the first by second");
    printf("\nenter 1st number:");
    scanf("%d",&x);
    printf("\nenter 2nd number:");
    scanf("%d",&y);
   
   
    int count=0;
    int ans=x;
    while(ans>0) {
        ans=ans - y;
        count=count+1;
       
    }
   
    printf("\n dividing %d by %d gives: %d",x,y,count);
    return 0;
}
