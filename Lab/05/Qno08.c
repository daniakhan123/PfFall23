#include<stdio.h>
int main(){
	int intensity;
	printf(" enter the intensity :");
	scanf("%d",intensity);
	
	if (intensity>500){
		printf("Exposed to the sunshine");
	}
	else if (intensity>0 && intensity<=100){
		printf("Its is Evening");
	}
	else if (intensity>100 && intensity<=500){
		printf("Lighting");
}
return 0;
}
