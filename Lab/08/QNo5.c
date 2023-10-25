#include <stdio.h>
void decideCarUsage(int a, int b);

int main() {
int a,b;
printf("enter car number: ");
scanf("%d",&a);
printf("enter day number of week: ");
scanf("%d",&b);
 decideCarUsage(a,b);
return 0;


}


void decideCarUsage(int a, int b){
    int flag;
    int flag1;
if(a%2) {
    flag =1;
}
else {
    flag =0;
}
if(b%2) {
    flag1 =1;
}
else {
    flag1 =0;
}

if(flag==flag1) {
    printf("1");
   
}
else {
    printf("0");
}
return ;

}
