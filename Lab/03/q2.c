#include <stdio.h>
int main(){
	int len=0;
	int depth=0;
	int width=0;
	printf("==finding volume of container program ==\n");
	printf("Taking Inputs--\n");
	printf("Enter Length");
	scanf("%d",&len);
	printf("Enter depth");
	scanf("%d",&depth);
	printf("Enter width");
	scanf("%d",&width);
	
	printf("\n--DONE...Taking inputs---\n)
	int volume = len * width * depth;
	printf("volume of container is = %d",volume); 

        return 1;
}//end main
