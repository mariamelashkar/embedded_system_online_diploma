#include<stdio.h>
#include<stdlib.h>
 struct Sstudent{
char name[100];
int roll;
float marks;
}s;

int main(){
printf("Enter the information of the student\n");
printf("Enter name:");
scanf("%s",& s.name);
printf("Enter roll number:");
scanf("%d",& s.roll);
printf("Enter marks:");
scanf("%f",& s.marks);
printf("name: %s\n",s.name);
printf("Roll:%d\n",s.roll);
printf("Marks:%f\n",s.marks);
return 0;
system("pause");
}