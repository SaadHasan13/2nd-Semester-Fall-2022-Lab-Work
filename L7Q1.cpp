#include<stdio.h>
#include<conio.h>
#include<math.h>
main(){
	
	int Output=1, Number;
	
	printf("Enter a number : ");
	scanf("%d", &Number);
	
	int x = Number;
	
	while(x >= 1){
		Output = Output * x;
		x--;
	}
	
	printf("%d! = %d", Number, Output);
	
	getch();
}
