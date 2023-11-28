#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
FILE *fptr;
fptr = fopen("./test1.c", "r+");

if (fptr == NULL){
printf ("The file is not opened.The program will exit now");
return 1;
}

else{
int rows=1, columns=0;
int i;
char chr = fgetc(fptr);
while (chr!=EOF){
if (chr == '\n'){
rows = rows + 1;
columns = 0;
}
chr = fgetc(fptr);
columns++;
}

fclose (fptr);
printf ("Number of rows is: %d\n",rows);
printf ("Number of columns is: %d",columns);
return 0;
}


return 0;
}
