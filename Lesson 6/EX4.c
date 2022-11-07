#include<stdio.h>
struct Sstudent{
char name[100];
int roll;
float marks;
};

int main(){
int i;
struct Sstudent arr[10];
printf("Enter information of students:\n");
for(i=0;i<10;i++){
arr[i].roll=i+1;
printf("for roll number %d\n:",arr[i].roll);
printf("Enter name:\n");
scanf("%s",&arr[i].name);
printf("Enter marks:\n");
scanf("%f",&arr[i].marks);
}
printf("Displaying information of students:\n");
for(i=0;i<10;i++){
printf("Information for roll number %d\n",arr[i].roll);
printf("Name:%s\n",arr[i].name);
printf("Marks:%f\n",arr[i].marks);
}
}