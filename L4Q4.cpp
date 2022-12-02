#include<stdio.h>
#include<conio.h>
main(){
	int num, check;
	printf("Type integer: ");
	scanf("%f", &num);
	
	check=num%2 ;
	
	if (check == 0){
		printf("The integer is an even number.");
	}
	else{
		printf("The integer is an odd number.");
	}
	getch();
}
