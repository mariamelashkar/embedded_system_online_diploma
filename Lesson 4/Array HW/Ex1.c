
#include <stdio.h>
int main() {
    int x,y,z,q;
    int m,n;
    float al1[2][2],al2[2][2];
    float sum=0;
      printf(" Enter the elememnts of 1st matrix\n");
    for(x=0;x<2;x++){
        for(y=0;y<2;y++){
            printf(" Enter a%d%d:",x+1,y+1);
            scanf("%f",&al1[x][y]);
        }
    }
     printf(" Enter the elememnts of 2nd matrix\n");
    for(z=0;z<2;z++){
        for(q=0;q<2;q++){
            printf(" Enter b%d%d:",z+1,q+1);
            scanf("%f",&al2[z][q]);
        }
    }
printf(" sum of matrix\n");
for(m=0;m<2;m++){
        for(n=0;n<2;n++){
          sum=al1[m][n]+al2[m][n]; 
          printf("%0.1f",sum);
          printf("\t");
        }
      printf("\n");
      
}
    return 0;
}