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
 
 
 printf("Enter name:");
 scanf("%s",&empo.name);
 
 printf("Enter department:");
 scanf("%s",&empo.department);


printf("Enter email:");
scanf("%s",&empo.email);

printf("Enter id no:");
 scanf("%d",&empo.id);


 printf("Enter salary:");
 scanf("%f",&empo.salary);
 
 
 
 
 printf("name:%s\n",empo.name);
 printf("Department:%s\n",empo.department);
 printf("Email:%s\n",empo.email);
 printf("id no:%d\n",empo.id);
 printf("salary:%.2f",empo.salary);
 
 return 0;
 }