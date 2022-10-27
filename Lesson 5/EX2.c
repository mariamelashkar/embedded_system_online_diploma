#include <stdio.h>
#include <stdlib.h>
 int interval(int num);
 int fact=1;
int main()
{
    int num;
    printf("Enter a positive integer:");
    scanf("%d",&num);
    if(num<0)
        printf("Error !! Please Enter a positive integer");
    printf("Factorial of %d = %d",num,interval(num));
    return 0;
}
 int interval(int num){
   fact=fact*num;
   num--;
   if(num>1)
   interval(num);
     return fact;

 }
