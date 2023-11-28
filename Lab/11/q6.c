
/*
    programmer:Dania Khan
date:25/11/23
    desc:date stored in a struct and days added and new date output
*/
#include <stdio.h>
int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

struct Date {
    int day ;
    int month;
    int year;
};


int main() {
    struct Date today;
    int no;//no of days to add
  printf("enter ur day,month,year");
  scanf("%d%d%d",&today.day,&today.month,&today.year);
    printf("enter no of days u wanto add");
    scanf("%d",&no);
   int year= isLeapYear(today.year);
    int days;
while(no>0) {
    if(today.month==2 ) {
        if (year==1)
        days=29;
        else  
        days=28;
    }
    
   else if(today.month<9 && today.month%2==1) {
        days=31;
    }
    else{
        days=30;
    }
    
    if(today.day+no>days) {
     
           no=no-(days-today.day+1);
           today.day=1;
           
        if(today.month==12) {
            today.year++;
            today.month=1;
        }
       else{
           today.month++;
       }
    }
      else{
          today.day++;
          no=0;
      }  
       
}
    printf("%d /%d /%d",today.day,today.month,today.year);
    return 0;
}
