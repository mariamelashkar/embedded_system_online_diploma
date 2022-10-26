#include <stdio.h>
int main() {
 int n,i,ele,j;
  printf(" Enter number of elements:");
  scanf("%d",&n);
  int array[n];
        for(i=0;i<n;i++){
            scanf("%d",&array[i]);
        }
    printf("Enter the element to be searched:");
    scanf("%d",&ele);
    for(j=0;j<n;j++){
        if(array[j]==ele)
            printf("Number found at the location= %d",j+1);
        }
       
  
    return 0;
}