#include<stdio.h>
 struct Scomplex{
float real;
float img;
}num1,num2;
struct Scomplex Sumcomplexreal(float number1,float number2){
struct Scomplex A;
A.real=number1+number2;
return A;
}
struct Scomplex Sumcompleximg(float number1,float number2){
struct Scomplex B;
B.img=number1+number2;
return B;
}

void Sumcomplex(struct Scomplex number1,struct Scomplex number2){
printf("Sum=%0.1f+%0.1fi",number1.real,number2.img);
}

int main(){
struct Scomplex x,y;
printf("For 1st complex number\n");
printf("Enter real and imginary respectively:");
scanf("%f %f",&num1.real,&num1.img);
printf("For 2nd complex number\n");
printf("Enter real and imginary respectively:");
scanf("%f %f",&num2.real,&num2.img);
x=Sumcomplexreal(num1.real,num2.real);
y=Sumcompleximg(num1.img,num2.img);
Sumcomplex(x,y);
return 0;
}
