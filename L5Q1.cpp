#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char Username[100], Password[100];
	
	printf("Enter username: ");
	gets(Username);
	
	printf("Enter password: ");
	gets(Password);
	
	if(strcmp(Username, "Miroslav Klose")== 0)
	{
		if(strcmp(Password, "Num-11")== 0){
			printf("Welcome Mr.  %s", Username);
		}
		else{
		printf("\nPassword is incorrect.");
	}
	}
	else{
		printf("\nUsername is incorrect.");
	}
	getch();
}
