#include<stdio.h>
void main(){
int i,n,fact=1;
printf("Enter an integer:");
scanf("%d",&n);
if(n>0){
 for(i=1;i<=n;i++){
    fact*=i;   
}
printf("Factorial = %d",fact);
}
if(n==0)
printf("Factorial = 1");

if(n<0)
printf("Error!!! Factorial of negative number doesn't exit");

}