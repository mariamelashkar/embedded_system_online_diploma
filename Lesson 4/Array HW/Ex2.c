
#include <stdio.h>
int main() {
    int x;
    float sum=0;
    int n;
      printf(" Enter the number of data:");
      scanf("%d",&n);
      float array[n];
    for(x=0;x<n;x++){
            printf(" %d.Enter number:",x+1);
            scanf("%f",&array[x]);
            sum+=array[x];
        }
      float  ave=sum/n;
printf("Average=%0.2f",ave);
    return 0;
}