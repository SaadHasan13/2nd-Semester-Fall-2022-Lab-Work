#include<stdio.h>
#include<conio.h>
main(){
	int P, R, T, SI;
	printf("Enter principal amount between 100 to 1000000 Rs: ");
	scanf("%d", &P);
	
	printf("Enter rate between 5 to 10: ");
	scanf("%d", &R);
	
	printf("Enter time period between 1 to 10 years: ");
	scanf("%d", &T);
	
	SI = P * R * T;
	
	printf("The simple interest is %d",SI);
	getch();
}
