#include <stdio.h>
#include <stdlib.h>
int powerfun(int base,int power);
int num=1;
int main()
{
    int power,num;
    printf("Enter base number :");
    scanf("%d",&num);
    printf("Enter power number (positive integer):");
    scanf("%d",&power);
    printf("%d ^ %d = %d",num,power,powerfun(num,power));
    return 0;
}
int powerfun(int base,int power){
  num=num*base;
  power--;
if(power>0)
powerfun(base,power);
return num;
}
