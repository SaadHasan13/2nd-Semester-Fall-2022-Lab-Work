#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	
	int StartLine, EndLine;
	int Even=0, Odd=0;
	
	printf("Enter the starting and ending line: ");
	scanf("%d %d", &StartLine, &EndLine);
	
	while(StartLine <= EndLine)
	{
		if (StartLine % 2 ==0){
			Even = Even + 1;
		}
		else{
			Odd = Odd + 1;
		}
		StartLine = StartLine + 1;
	}
	printf("\nTotal Even numbers are : %d", Even);
	printf("\nTotal Odd numbers are : %d", Odd);
	
	getch();
}
