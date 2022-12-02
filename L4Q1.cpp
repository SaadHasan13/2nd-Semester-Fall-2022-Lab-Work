#include<stdio.h>
#include<conio.h>
main(){
	int A,B,C,S ;
	printf("Enter three sides of a triangle: ");
	scanf("%d",&A);
	scanf("%d",&B);
	scanf("%d",&C);
	
	S = A + B + C;
	if(S == 180){
		printf("The triangle is valid.");
	}
	else{
		printf("The triangle is not valid.");
	}
	getch();
}	
