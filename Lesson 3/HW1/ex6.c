#include<stdio.h>
void main(){
float a,b,temp=0.0;
printf("Enter value of a:");
scanf("%f",&a);
printf("Enter value of b:");
scanf("%f",&b);
temp=a;
a=b;
b=temp;
printf("After swapping ,value of a =%f \n",a);
printf("After swapping ,value of b =%f ",b);
}

