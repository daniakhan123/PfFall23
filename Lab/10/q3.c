//programmer:Dania khan
//dtae:21/11/23
//desc:comparsion of  2 dates


#include <stdio.h>
#include <string.h>
//struct for dates
  struct date{
        int day;
        int month;   
        int year;      
    };
int main(){

int i = 0;
int n;
struct date d[2];
while(i<2)
{
   printf("date no: %d \n",i+1);
   printf("enter day ");
scanf("%d",&d[i].day);
printf("\nenter month ");
scanf("%d",&d[i].month);
printf("\nenter year : ");
scanf("%d",&d[i].year);
++i;
}
 // comparing dates
      if(d[0].day==d[1].day &&d[0].month==d[1].month && d[0].year==d[1].year)  {
        printf("dates are equal" );
        }
        else {
            printf("dates are not equal");       
     }
    return 0;
}
