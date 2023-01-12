#include<stdio.h>
#include<conio.h>
int RaisePower(int Num, int Power);
main(){
	int N, P, Answer;
	printf("Enter your number: ");
	scanf("%d", &N);
	printf("\nEnter the power: ");
	scanf("%d", &P);
	
	Answer = RaisePower(N,P);
	printf("%d to the power %d is: %d", N, P, Answer);
	getch();
}
int RaisePower(int Num, int Power){
	int x, Result=1;
	
	for(x = 0; x < Power; x++){
		Result = Result * Num   ;
	}
	return Result;
}
