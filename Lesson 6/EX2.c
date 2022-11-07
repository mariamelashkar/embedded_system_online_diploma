#include<stdio.h>
#include<stdlib.h>
 struct Sdistances{
float inch;
float feet;
}d1,d2,sum;

int main(){
printf("Enter the information of 1st distance\n");
printf("Enter feet:");
scanf("%f",&d1.feet);
printf("Enter inch:");
scanf("%f",&d1.inch);
printf("Enter the information of 2nd distance\n");
printf("Enter feet:");
scanf("%f",&d2.feet);
printf("Enter inch:");
scanf("%f",&d2.inch);
sum.feet=d1.feet+d2.feet;
sum.inch=d1.inch+d2.inch;
if(sum.inch>12){
sum.inch=sum.inch-12.0;
sum.feet++;
}
printf("sum of the distances=%f\'-%f\" ",sum.feet,sum.inch);
return 0;
system("pause");
}