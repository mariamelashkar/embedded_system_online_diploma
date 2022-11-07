#include<stdio.h>
#define PI 3.14

int main(){
float area;
float r;
printf("Enter the radius:");
scanf("%f",&r);
area=PI*r*r;
printf("Area=%0.2f",area);
}