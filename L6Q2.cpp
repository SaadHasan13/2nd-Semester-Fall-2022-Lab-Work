#include<stdio.h>
#include<conio.h>
main(){
	int DayNum;
	printf("Enter the day of the week: ");
	scanf("%d",&DayNum);
	
	switch(DayNum)
	{
		case 1:
			printf("Today is Monday.");
			break;
		case 2:
			printf("Today is Tuesday.");
			break;
		case 3:
			printf("Today is Wednesday.");
			break;
		case 4:
			printf("Today is Thursday.");
			break;
		case 5:
			printf("Today is Friday.");
			break;
		case 6:
			printf("Today is Saturday.");
			break;
		case 7:
			printf("Today is Sunday.");
			break;
		default:
			printf("A week only consists of 7 days.");
			break;
	}
	getch();
}
