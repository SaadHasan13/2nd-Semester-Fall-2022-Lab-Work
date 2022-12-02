#include<stdio.h>
#include<conio.h>
main(){
	int A,B;
	
	printf("Enter the 1st number: ");
	scanf("%d",&A);
	
	printf("Enter the 2nd number: ");
	scanf("%d", &B);
	
	printf("\nThe sum of the two numbers is %d ", A+B);
	printf("\nThe difference of the two numbers is %d", A-B);
	printf("\nThe product of the two numbers is %d", A*B);
	printf("\nThe quotient of the two numbers is %d", A/B);
	printf("\nThe remainder of the two numbers is %d",A%B);
	
	getch();
}
