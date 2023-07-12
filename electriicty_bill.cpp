#include<stdio.h>

int main(){
	
	int id,units,total;
	float total_amount;
	char name[20];
	
	printf("Enter your id\n");
	scanf("%d",&id);
	printf("Enter your name\n");
	scanf("%s",&name);
	printf("Enter your units\n");
	scanf("%d",&units);
	
	if(units<=199) {
		
		total_amount = units * 1.20;
	}else
     	if(units>=200 && units<=400) {
		
		total_amount = units * 1.50;
	}else

	if(units<=400 && units>=600) {
		
		total_amount = units * 1.80;
	}else

	if(units>=600) {
		
		total_amount = units * 2.00;
	}
	
	if(total_amount >400) {
		
		float surcharge = total_amount * 15 / 100;
		float total = surcharge + total_amount;
		printf("Electricity charges are %f",total);
	} else {
		printf("Electricity charges are %f",total_amount);
	}
	
}
