//programmer ; DAnia Khan
//Description : Creating Maxlocal

#include <stdio.h>
#include <stdbool.h>



int main()
{
    int p;
    
    printf("Enter order of your square  matrix; ");
    scanf("%d",&p);
   
   int Arr[p][p];

    for(int i=0; i<p; i++) {
        printf("Enter elements of first matrix: \n");
        for(int j=0; j<p; j++) {
            printf("Element of row:%d,col:%d :  ",i+1,j+1);
            scanf("%d",&Arr[i][j]);
        }     
    }
  
      //original matrix:
      printf("Matrix  1:\n");
       for(int i=0; i<p; i++) {
             for(int j=0; j<p; j++) {
                 printf("%d",Arr[i][j]);
                 printf("\t");
             }
             printf("\n");
       }
       
       int max=0;
  int maxLocal[p-2][p-2];

  
    for(int i=0;i<p-2;i++) {
    for(int j=0;j<p-2;j++){
        max=0;
    for(int k=i;k<i+3;k++){
    for(int l=j;l<j+3;l++){
        if(Arr[k][l]>max) {
           max=Arr[k][l];
            maxLocal[i][j]=Arr[k][l];   
        }//finding max 
    }
    }
    }
    }
    
    printf("\nMatrix  maxLocal becomes: \n");
       for(int i=0; i<p-2; i++) {
             for(int j=0; j<p-2; j++) {
                 printf("%d",maxLocal[i][j]);
                 printf("\t");
             }
             printf("\n");
       }//printing maxLocal
    
    
    
    
    
    return 0;
}
