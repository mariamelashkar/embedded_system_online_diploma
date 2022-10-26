
#include <stdio.h>
int main() {
  int rows,coloms;
  int x,y,m,n,p,q;
  printf(" Enter rows and coloums of matrix:");
  scanf("%d %d",&rows,&coloms);
  int array[rows][coloms];
  printf("Enter elements of matrix:\n");
    for(x=0;x<rows;x++){
        for(y=0;y<coloms;y++){
            printf(" Enter elements a%d%d:",x+1,y+1);
            scanf("%d",&array[x][y]);
        }
    }
    printf("Entered matrix:\n");
    for(m=0;m<rows;m++){
        for(n=0;n<coloms;n++){
            printf("%d",array[m][n]);
            printf(" ");
        }
        printf(" \n");
    }
    printf("transpose of the matrix:\n");
    for(q=0;q<coloms;q++){
        for(p=0;p<rows;p++){
            printf("%d",array[p][q]);
            printf(" ");
        }
        printf(" \n");
    }
  
    return 0;
}