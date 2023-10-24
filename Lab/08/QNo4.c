#include<string.h>
#include<stdio.h>
int main()
{
    
char password[80];
char str[100]="Secure123";
printf("Enter password:\n");
gets(password);
int ret;
 int len=strlen(password);
if(len>=8) {
    
}
ret = strcmp(password, str);

if(ret < 0) {
printf("invalid password");
} else if(ret > 0) {
printf("invalid password");
} else {
printf("Welcome!");
}

if (len==0) {
    printf("Invalid length");
}


return 0;
}
