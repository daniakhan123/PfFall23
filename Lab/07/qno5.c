//programmer:Dania Khan
//date:10/10/23
//desc: printing human


#include <stdio.h>
void hat(int N) {
    int stars=N;
    while(N-2) {
       for(int j=0;j<4;j++) {
        printf(" ");
    }
    for(int i=0;i<stars;i++) {
          printf("*");
        }
    printf("\n");
    N--;
    }//hat
    printf(" ");
    while(stars+6 ) {
        printf("*");
        stars--;
    }//hat rim
}//end hat


void face(int N) {
    //eyes
  printf("\n");
     for(int j=0;j<4;j++) {
        printf(" ");
    }
    printf("*");
    for(int j=0;j<N-2;j++) {
        printf(" ");
    }
    printf("*\n");
  //eyes
   //nose
  for(int j=0;j<(N/2)+4;j++) {
        printf(" ");
    }
    printf("|\n");//nose
   //smile
  for(int j=0;j<(N/2)+3;j++) {
        printf(" ");
    }
    printf("\\_/");//smile
    printf("\n\n");
        //neck
  for(int j=0;j<(N/2)+3;j++) {
        printf(" ");
    }
    printf("| |\n");//neck
}//end face

void body(int N) {
    int stars=N;
    int b=N;
  //shoulders
     while(stars+8 ) {
        printf("*");
        stars--;
    }//shoulders
    printf("\n");
  //hands and body
      while(N-1) {
          printf("**");
          printf("  ");
       for(int j=0;j<b;j++) {
        printf("*");
    }
    printf("  ");
     printf("**\n");
    
    N--;
    }
  //end hands and body

  //legs
    for(int j=0;j<4;j++) {
        printf(" ");
    }
        for(int i=0;i<b;i++) {
            
        printf("*");
        }
    printf("\n");
    for (int i=0;i<b;i++) {
     for(int j=0;j<4;j++) {
        printf(" ");
    }
      printf("**");
         for(int i=0;i<b-4;i++) {
    printf(" ");
         }    
        printf("**");
        printf("\n");
    }
    printf(" ");
//legs
  
  //feet
    for(int i=0;i<2;i++) {
    for(int i=0;i<5;i++) {
    printf("*");
    }
    for(int i=0;i<b-4;i++) {
    printf(" ");
    }
    }//feet
}//end body
 

int main (){
int N;
  printf("Enter a number: "); 
scanf("%d",&N);


 hat(N);
 face(N);
 body(N);




return 0;
}//end main
