#include<stdio.h>
#include<conio.h>
main(){
	int num, check;
	
	printf("Enter an number: ");
	scanf("%d", &num);
	
	check = num % 2;
	
	if(num > 0)
	{
		if(check == 0){
			printf("This is a even number.");
		}
		else{
			printf("This is an odd number.");
		}
	}
	else{
		printf("Only positive numbers are acceptable.");
	}
	getch();
}
