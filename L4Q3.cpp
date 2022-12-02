#include<stdio.h>
#include<conio.h>
main(){
	float temp;
	printf("Enter the temperature for AC: ");
	scanf("%f",&temp);
	
	if (temp >40 ){
		printf("Turn on the AC.");
	}
	else{
		printf("Turn off the AC.");
	}
	getch();
}
