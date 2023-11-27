//programmer dania khan
// date 11/11/23
//desc : finding factorial through recusrion

#include<stdio.h>

int fact(int a){
    if(a == 0 || a == 1){
        return 1;
    } else {
        return a * fact(a-1);
    }
}

int main(){
    int n;
    printf("Enter any number: ");
    scanf("%d", &n);

    int result = fact(n);
    printf("Factorial of %d is %d", n, result);

    return 0;
}

