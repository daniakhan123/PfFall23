
//programmer Dania khan
//Date 28-10-23
//Description pairs that makes the sum 't'

#include <stdio.h>
int main(){
   int N,i,t,j,sum=0;

    printf("enter size of an array : ");
    scanf("%d",&N);

    printf("enter targeted integer : ");
    scanf("%d",&t);

    int a[N];

    for(i=0;i<N;i++){
        printf("enter elements of array : ");
        scanf("%d",&a[i]);
    }
    printf("THE PAIRS THAT MAKE THE SUM = %d ARE : \n",t);

        for(i=0;i<N-1;i++){  
            for(j=i+1;j<N;j++){
            sum = a[i] + a[j]; //adding elements of an array
            if(sum == t){ //checking ig=f their sum = t
                printf("(%d , %d)\n",a[i],a[j]); //printing the sum
            }
            }
    }

    return 0;
} //end main
