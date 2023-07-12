#include<stdio.h>

int main(){
	
	float height,weight,inch,meter,BMI;
	
	printf("Enter your height\n");
	scanf("%f",&height);
	
	printf("Enter your weight\n");
	scanf("%f",&weight);
	
	inch = 1 / 39.37;//One inch is equal to 0.254meters
	
//	printf("%f\n",inch);
	
	meter = inch * height;
	
//	printf("%f\n",meter);
	
	BMI = weight / ( meter * meter);
	
      switch(BMI<18 && BMI>5)
      {
      	case 1:
      		printf("Underwidth");
      		break;
      		
      		case 0:
      			 switch(BMI<24.9&&BMI>=18)
      {
      	case 1:
      		printf("Normal weigh");
      		break;
      		
      		case 0:
      			
      			 switch(BMI<29.9 && BMI>=24.9)
      {
      	case 1:
      		printf("Overweight");
      		break;
      		
      		case 0:
      			switch(BMI>=29.9 && BMI<34.9)
      			{
      				case 1:
      					printf("Obesity class 1");
      					break;
      					
      					case 0:
      						
      						switch(BMI>=34.9 && BMI<39.9)
      						{
      							case 1:
      								printf("Obesity class 2");
      								break;
      								
      								case 0:
      									
      									switch(BMI>=39.9)
      									{
      										case 1:
      											
      											printf("Extreme Obesity");
      											break;
      											
      											case 0:
      												printf("You entered an invalid value");
										  }break;
							  }break;
				  }break;
      			
	  }break;
}break;
}
}
