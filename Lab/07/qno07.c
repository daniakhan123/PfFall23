//Programmer : Dania Khan
//Date: 28-10-23
//Description : Multiplying matrix

#include <stdio.h>
#include <math.h>
int main(){

    int r,c,m,n,i,j,k,p,q;

    printf("enter size of row of 1st matrix : ");
    scanf("%d", &r);
    printf("enter size of column of 1st matrix : ");
    scanf("%d", &c);


    printf("enter size of row of 2nd matrix : ");
    scanf("%d", &m);
    printf("enter size of column of 2nd matrix : ");
    scanf("%d", &n);

  if(c!=m){//making condition for multiplication
    printf("matrix cannot be multiplied ");
  }
 int  arr[r][c];//taking input array elements for 1st matrix
   for(i=0;i<r;i++){
    for(j=0;j<c;j++){
        printf("enter elements of [%d][%d] of 1st matrix:",i,j);
        scanf("%d",&arr[i][j]);
    }
   }
   printf("\n");
int arr2[m][n];//taking input array elements for 2nd matrix
      for(p=0;p<r;p++){
    for(q=0;q<c;q++){
        printf("enter element of [%d][%d] of 2nd matrix:",p,q);
        scanf("%d",&arr2[p][q]);
    }
   }
  int res[r][n];

     for(i=0;i<r;i++){
     for(j=0;j<n;j++){
        res[i][j]=0;
         for(k=0;k<c;k++){

        res[i][j] +=arr[i][k]*arr2[k][j];//multiplying matrix and adding it 
         }
    }  
   }
   printf("\n");//printing resultatnd matrix
        for(i=0;i<r;i++){
    for(j=0;j<n;j++){
        printf("%d ",res[i][j]);
    }
    printf("\n");
}
    return 0;
}//end main
