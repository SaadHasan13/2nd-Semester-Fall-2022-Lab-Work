#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char First_Name[100], Last_Name[100], Full_Name[200];
	printf("Enter your 1st name: ");
	gets(First_Name);
	printf("Enter your surname: ");
	gets(Last_Name);
	strcat(First_Name,Last_Name);
	printf("\n Your fullname is %s",First_Name);
	
	getch();
}
