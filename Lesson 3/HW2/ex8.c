#include<stdio.h>
void main(){
float x,y;
char op;
printf("Enter operator either + or - or * divide :");
scanf("%c",&op);
printf("Enter two operands :");
scanf("%f %f",&x,&y);
switch(op){
    case '+':
    printf("%f + %f = %0.2f",x,y,x+y);
    break;
    case '-':
    printf("%f - %f = %0.2f",x,y,x-y);
    break;
    case '*':
    printf("%f * %f = %0.2f",x,y,x*y);
    break;
    case '/':
    printf("%f / %f = %0.2f",x,y,x/y);
    break;
}
}