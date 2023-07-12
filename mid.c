#include<stdio.h>

int main(){

    int rows,j,i,k;

    printf("Enter rows\n");
    scanf("%d",&rows);//5
    k = rows;//5

    for(i = rows;i>=1;i--) {//5>1
      
        for(j = i;j>=1;j--){//4>1
            if(k<rows){//5<5
                printf(" ");
            }
            else{
                printf("%d",j);//54
            }
        }printf("\n");
    }k--;
}