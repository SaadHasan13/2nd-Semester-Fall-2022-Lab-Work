#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	int X;
	
	for(X=1; X<=255; X=X+1)
	{
		printf("%d. %c\n", X, char(X));
	}
	getch();
}
