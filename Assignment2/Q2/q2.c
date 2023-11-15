
//programmer:Dania Khan
//date: 29/10/23
//desc: submatrix
#include <stdio.h>

int main()
{
   int rows,cols,k,l,m;
   printf("input no of rows : ");
   scanf("%d",&rows);
    printf("input no of columns : ");
   scanf("%d",&cols);
   int arr[rows][cols];
   printf("enter 1s and 0s only: \n");
   for(int i=0;i<rows;i++) {
       for(int j=0;j<cols;j++) {
           printf("enter element no [%d][%d] ",i+1,j+1);
           scanf("%d",&arr[i][j]);
       }
   }
   
   
    printf("\n\n");
       for(int i=0;i<rows;i++) {
       for(int j=0;j<cols;j++) {
           printf("%d\t",arr[i][j]);
       }
       printf("\n");
       }
      for(int i=1;i<rows;i++) {
       for(int j=1;j<cols;j++) {
   if(arr[i][j]==1) {
       k=arr[i-1][j-1];
        l=arr[i][j-1] ;
        m=arr[i-1][j] ;
        if(k < l && k < l)
{
 arr[i][j]=k+1;
}
else if(l < m)
{
arr[i][j]=l+1;
}
else
{
arr[i][j]=m+1;
}
   }
       }
         
      }
     
     
    int max;
    max = arr[0][0];
    int i,j,row=0,col=0;
    for( i=0; i<rows; i++)
    {
        for( j=0; j<cols; j++)
        {
            if(max<arr[i][j]) {
                max = arr[i][j];
                row=i;
                col=j;
            }
        }
     
    }
   
     int index1=row-max+2;
     int index2=col-max+2;
     
     
      printf("\nthe maximum square matrix we get is =%d*%d \nits starting from element no [%d][%d] and ending on element no [%d][%d]",max,max,index1,index2,row+1,col+1);
     
     
    return 0;
}
