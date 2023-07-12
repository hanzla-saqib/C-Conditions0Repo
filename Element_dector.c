#include<stdio.h>

int main(){

    int num,temp,count = 0,digit;

    printf("Enter a number\n");
    scanf("%d",&num);

    for(int i = 0;i<=9;i++) {

      temp = num;
      count = 0;

      while(temp>0) {
        
        digit = temp % 10;
        if(digit == i) {
          count++;
        }
        temp /= 10;

      }

      if(count>0) {
        printf("%d occours %d times",i,count);
      }
    }
}