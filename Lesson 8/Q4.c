#include<stdio.h>
int main()
{
int i,x;
int arr[15];
int *ptr=arr;
printf("Enter number of elements to store in array:");
scanf("%d",&x);
printf("Input %d number of elements in the array :\n",x);
for(i=0;i<x;i++){
printf("element-%d :",i+1);
scanf("%d",&arr[i]);
printf("\n");
}
ptr=ptr+(x-1);
printf("The elements of array in reverse order :\n",x);
for(i=x;i>0;i--){
printf("element-%d :%d",i,*ptr);
printf("\n");
ptr--;
}
return 0;
}