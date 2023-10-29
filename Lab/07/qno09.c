//programmer : Dania Khan
//Description: Billing of All the branches

#include<stdio.h>
int main(){
    int br , ph,i,j;

     printf("Enter the number of company branches : ");
    scanf("%d", &br);

   printf("enter the number of mobile phones in each Branch :");
    scanf("%d",&ph);

    int bill[br][ph];

    for(i=0;i<br;i++){
        for(j=0;j<ph;j++){
            printf("Enter bill for branche %d ",i+1);
            scanf("%d",&bill[i][j]);


        }
    }
    
    int totalBill = 0;
    int maxBranchID = 0;
    int maxBill = bill[0][0];
    int maxBranchBill = 0;
    int maxPhoneID = 0;
    int branchBill = 0;
    printf("\n");

        for (int i = 0; i < br; i++) {
        for (int j = 0; j < ph; j++) {
            branchBill = branchBill + bill[i][j];
            totalBill = totalBill + bill[i][j];
            if (bill[i][j] > maxBill) {
                maxBill = bill[i][j];
                maxBranchID = i;
                maxBranchBill = branchBill;
                maxPhoneID = j;
            }
        }
        printf("Total bill for branch %d: %d\n", i + 1, branchBill);
    }
    printf("\n");

    printf("Total bill for all branches: %d\n", totalBill);
    printf("Branch with maximum bill : %d\n", maxBranchID + 1);
    printf("The Highest Bill : %d of Branch ID: %d and Mobile Phone ID: %d\n",maxBill, maxPhoneID , maxBranchID  );

    return 0;
}
