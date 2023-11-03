//Programmer : Dania Khan
// Date: 24-10-23
// Description : Statistics of Each player in a team.


#include<stdio.h>
int main(){
    int B,Inn,i,j,total_runs,sum=0,century=0,half_century=0,highest_score;

    printf("Enter number of Batsmen:");
    scanf("%d", &B);
    printf("Enter Number of Innings :");
    scanf("%d", &Inn);

    int arr[B][Inn];

    for(i=0;i<B;i++){
        printf("Enter the Batting performance of %d Batsman : \n ",i+1);
        for(j=0;j<Inn;j++){
            printf("In Inning %d: ",j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    highest_score=arr[0][0];

        for(i=0;i<B;i++){
        for(j=0;j<Inn;j++){
             sum =arr[i][j]+sum;
             if(arr[i][j]>highest_score){
                 highest_score=arr[i][j];
                }
             if(arr[i][j]>=100){
                century++;}
             if(arr[i][j]>=50){
                half_century++;}

             
        }

    double Avg_runs;
     total_runs = sum;
     Avg_runs = total_runs/ (B*Inn);

    printf("\nStatistics of Batsman number %d \n",i+1);
    printf("Total Runs are : %d\n",total_runs);
    printf("Average runs per inning: %.2lf\n", Avg_runs);
    printf("The Highest Score in a single Inning : %d \n",highest_score);
    printf("Number of Centuries are : %d\n ",century);
    printf("Number of Half Centuries are : %d \n",half_century);
        }

    return 0;
}
