#include<stdio.h>
#include<conio.h>
int Factorial (int x); 
main(){
	int N, Answer;
	printf("Enter number to calculate a factorial for: ");
	scanf("%d", &N);
	
	Answer = Factorial(N);
	
	printf("\n %d ! = %d", N, Answer);
	getch();
}
int Factorial (int x){
	int Result = 1;
	for (int b = x; b>=1 ; b--){
		Result = Result * b;
	}
	return Result;
}
