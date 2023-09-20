#include<stdio.h>
int main(){
 char input,y,n,N ,Y;
printf("are you sure to delete this then input [y/Y]/[N/n] ?");
scanf("%c",&input);

switch(input){
case 'y':  
	printf("Deleted Successfully");
	break;
case 'Y':  
	printf("Deleted Successfully");
	break;
case 'n': 
	printf("Delete canceled");
	break;
case 'N':
	printf("Delete canceled");
	break;
default :
	printf("invalid input"); 
}
return 0;
}

