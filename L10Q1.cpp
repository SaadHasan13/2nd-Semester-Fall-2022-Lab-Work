#include<stdio.h>
#include<conio.h>
#include<string.h>
main(){
	char String_1[100], String_2[100];
	int FinalResult;
	printf("Enter 1st string: ");
	gets(String_1);
	printf("Enter 2nd string: ");
	gets(String_2);
	
	FinalResult = (strcmp(String_1,String_2));
	if(FinalResult == 0)
	{
		printf("The strings are equal.");
	}
	else
	{
		printf("The strings are not equal.");
	}
	getch();
}
