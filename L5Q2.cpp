#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char Username[100], Password[100], OTP[100];
	
	printf("Enter username: ");
	gets(Username);
	
	printf("Enter password: ");
	gets(Password);
	
	printf("Enter OTP: ");
	gets(OTP);
	
	if(strcmp(Username, "Ash Crimson")== 0 && strcmp(Password, "A.B.C.D")== 0)
	{
		if(strcmp(OTP, "Venom-6p")== 0){
			printf("Welcome Mr.%s", Username);
		}
		else{
			printf("\nOTP is incorrect.");
		}
	}
	else{
		printf("\nEither username or password is incorrect.");
	}
	getch();
}
