#include<stdio.h>
int main(){
	
	char ch;
	printf(" Enter any  character :");
	scanf("%c",&ch);
	
	if(ch>='a' && ch<='z'){
		printf("Small alphabhet");
	}
	else if(ch>='A' && ch<='Z'){
		printf("Capital alphabhet");
	}
	else if(ch>='0' && ch<='9'){
		printf("Its a digit");
	}
	else{
		printf("special Characters");
	}
	return 0;	
}
