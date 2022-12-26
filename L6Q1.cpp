#include<stdio.h>
#include<conio.h>
main(){
	int num;
	printf("Please select a number: ");
	scanf("%d", &num);
	
	switch(num)
	{
		case 1:
			printf("You have selected the ODD number menu.");
			break;
		case 2:
			printf("You have selected the EVEN number menu.");
			break;
		case 3:
			printf("You have selected  the sum of squares of two numbers.");
			break;
		case 4:	
			printf("Exit.");
			break;
		default:
			printf("Invalid Option.");
			break;
	}
	getch();
}
