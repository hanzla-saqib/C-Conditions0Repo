#include<stdio.h>

int main(){
	
	char  cha;
	
	printf("Enter a character\n");
	scanf("%c",&cha);
	
	if((cha >= 'a' && cha<= 'z')||(cha>='A' && cha<='Z')){
		printf("The characer %c you entered is an alphabet ",cha);
	}
	else 
	if(cha>='0' && cha<='9') {
	      
	      printf("%c is a number",cha);
	}
	else {
		printf("%c a special character",cha);
	}
}
