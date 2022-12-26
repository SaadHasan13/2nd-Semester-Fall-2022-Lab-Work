#include<stdio.h>
#include<conio.h>
main(){
	char ArithOps;
	printf("Enter the arithmetic operations for which you want to do a calculation: ");
	scanf("%s", &ArithOps);
	
	switch(ArithOps)
	{
		case '+':
			printf("You have selected the addition operation.");
			break;
		case '-':
			printf("You have selected the subtraction operation.");
			break;
		case '*':
			printf("You have selected the multiplication operation.");
			break;
		case '/':
			printf("You have selected the division operation.");
			break;
		default :
		 	printf("Math ERROR.");
		 	break;
	}
}
