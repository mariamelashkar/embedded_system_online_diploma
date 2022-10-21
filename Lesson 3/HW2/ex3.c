#include<stdio.h>
void main(){
float x,y,z;
printf("Enter three numbers :");
scanf("%f %f %f",&x,&y,&z);
if(x>=y){
    if(x>=z)
   printf("Largest number= %0.2f ",x); 
else
printf("Largest number= %0.2f ",z);
}
if(y>=x){
    if(y>=z)
    printf("Largest number= %0.2f ",y);
    else
    printf("Largest number= %0.2f ",z);
}

}