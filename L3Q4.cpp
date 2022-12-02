#include<stdio.h>
#include<conio.h>
main(){
	float weight, height, BMI;
	
	printf("Enter your height in metres: ");
	scanf("%f",&height);
	
	printf("Enter your weight in kilograms: ");
	scanf("%f",&weight);
	
	BMI= weight /(height*height);
	printf("\nThe Body Mass Index is %f",BMI);
	getch();  
}
