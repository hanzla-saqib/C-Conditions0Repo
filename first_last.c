#include<stdio.h>
#include<conio.h>
int main() {

    char ch,ch1,ch2,ch0;
    int occ = 0;

    while(1) {
        
           ch = getch();//=

           occ++;//4

           if(occ == 2) {//2
            ch1 = ch;//5
           }
           
           if(ch == '=') {

            break;
           }
           ch2 = ch0;//5
           ch0 = ch;//3
    }

    if(ch1 == ch2) {

        printf("%c and %c are same numbers\n",ch1,ch2);
    }
    else{
         printf("%c and %c are not same numbers\n",ch1,ch2);
    }
}