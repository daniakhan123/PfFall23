// Programmer : Dania khan
// Date 20-10-2023
// Description : Finding frequency of elements

# include<stdio.h>
int main(){
    int n,i,j;


    printf("enter Array size :");
    scanf("%d",&n); 

    int arr[n];
   int fre[n];// making an array for frequncy 

    for(i=0;i<n;i++){
        printf("enter elements of array :");
        scanf("%d",&arr[i]);
        fre[i]=1;
    }

        for(i=0;i<n;i++){
                if(fre[i]==0)
                    continue;
                  for(j=i+1;j<n;j++){
                    if(fre[j]==0)
                    continue;
                    if(arr[i]==arr[j]){
                        fre[i]++;
                        fre[j]=0;
                    }
                }
    }
    
printf("\n Frequencies are :");

for(i=0;i<n;i++){
    if(fre[i]!=0);// checkimg to print the elemnts whose frequency is greater than 0
    printf("\n Frequencies of %d is %d \n ",arr[i],fre[i]);
}


    return 0;
}// end  main
