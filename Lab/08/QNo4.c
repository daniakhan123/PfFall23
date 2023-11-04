//programmer Dania Khan
// Description : checking password 

# include<stdio.h>
# include<string.h>

int main(){

char str[100];
char str1[]="Secure123";
printf("enter your password : ");
scanf("%s",str);
printf("length of password is %d\n",strlen(str));
if(strlen(str)<8){
    printf("invalid password!");
}

else{
	if(strcmp(str,str1) == 0){
		printf("login successfully! ");
	}
    else{
        printf("login Failed (inccorect password)");
          }
}
    return 0;
}
