// programmer dania khan
// dec printing fibonacci series using recursion


#include<stdio.h>
int fibo(int n){

    if(n==1 || n==2 ){
        return 1;
    }
    return fibo(n-1) + fibo(n-2); 
}
int main(){

    int a ;
    printf("enter number of terms of fibonacci series : ");
    scanf("%d",&a);

    int p = fibo(a);
    printf("%d",p);

    return 0;
}
