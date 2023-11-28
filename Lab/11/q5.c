*/
  Programmer: Dania Khan
 date;25//12/23
    desc:using nested structs to output info
*/
#include <stdio.h>

struct Employee{
    int emp_id;
    char emp_name[30];
    int emp_sal;
};

//outer structure
struct Organization{
  char  org_name[100];
 char org_num[20];
 //inner structure
 struct Employee data;
};

int main()
{
   // struct Employee data={127,"Linus Sebastian",400000};
   struct Organization org={"NU-Fast","NUFAST123ABC",127,"Linus-Sebastian",400000};
    
   printf("The size of structure organization is %ld\n",sizeof(struct Organization)) ;
   printf("Organization name:%s\n",org.org_name);
   printf("Organization Number:%s\n",org.org_num);
      printf("Employee id:%d\n",org.data.emp_id);
      printf("Employee name :%s\n",org.data.emp_name);
       printf("Employee salary :%d\n",org.data.emp_sal);
   return 0;
}
