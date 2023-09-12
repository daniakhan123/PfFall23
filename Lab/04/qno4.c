#include<stdio.h>
#include<math.h>
int main(){
	float ans1;
	float ans2;
	float d;
	int a,b,c;
	
	printf("enter value of a");
	scanf("%d",&a);
	printf("enter value of b");
	scanf("%d",&b);
	printf("enter value of c");
	scanf("%d",&c);
	
	d=(b*b)-4*a*c;
	ans1=-b+sqrt(d)/2*a;
	ans2=-b-sqrt(d)/2*a;
		printf("the quadratic formula %f \n",ans1);
			printf("the quadratic formula %f \n",ans2);
		
 return 0;
}
