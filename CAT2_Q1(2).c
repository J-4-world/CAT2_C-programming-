#include<stdio.h>
#include<string.h>

struct emp{
 char name[30];
 char department[30];
 char email[30];
 int id;
 float salary;
 }empo;
 int main (){
 strcpy(empo.name,"John Doe");
 strcpy(empo.department,"Human Resources");
 strcpy(empo.email,"joe.doe@company.com");
 int id=1234;
 float salary=55000.50;
 
 
 
 
 
 printf("name:%s\n",empo.name);
 printf("Department:%s\n",empo.department);
 printf("Email:%s\n",empo.email);
 printf("id no:%d\n",id);
 printf("salary:%.2f",salary);
 
 return 0;
 }