#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int Num, Result;
	
	printf("Enter a number to generate table for: ");
	scanf("%d", &Num);
	
	for(int k=1; k<=10; k=k+1){
       Result = Num * k;
       printf("\n%d * %d = %d", Num, k, Result);
	}
	
	getch();
}
