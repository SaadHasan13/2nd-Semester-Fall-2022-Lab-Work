#include<stdio.h>
#include<conio.h>
main(){
	int X,Y;
	
	printf("Enter 1st number: ");
	scanf("%d", &X);
	
	printf("Enter 2nd number: ");
	scanf("%d", &Y);
	
	X = X + Y;
	Y = X - Y;
	X = X - Y;
	
	printf("New value of X after swap is %d",X);
	printf("\nNew value of Y after swap is %d",Y);
	getch();
}
