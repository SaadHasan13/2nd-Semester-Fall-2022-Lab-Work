#include<stdio.h>
#include<conio.h>
main(){
	float InterPercentage, AptPercentage;
	printf("Enter intermediate's percentage: ");
	scanf("%f", &InterPercentage);
	printf("Enter aptitude's percentage: ");
	scanf("%f", &AptPercentage);
	
	if(InterPercentage>= 60 && AptPercentage >= 70){
		printf("\nYou are eligible for admission.");
	}
	else{
		printf("\nYou are ineligible for admission.");
	}
	getch();
}
