#include<stdio.h>
#include<conio.h>
main(){
	int Salary,WorkHrs,Overtime,Bonus;
	printf("To calculate an employee's overtime: ");
	scanf("%d",&WorkHrs);
	
	Overtime= WorkHrs - 40;
	Bonus = 1000 * Overtime;
	Salary = 60000 + Bonus ;
	
	if (WorkHrs> 40){
		printf("Your total salary is: %d",Salary);
	}
	else{
		printf("Your total salary is: %d",Salary);
	}
	getch();
}
