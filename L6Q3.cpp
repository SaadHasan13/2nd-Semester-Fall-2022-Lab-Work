#include<stdio.h>
#include<conio.h>
main(){
	char letter;
	printf("Enter an alphabet: ");
	scanf("%s", &letter);
	
	switch(letter)
	{
		case 'a':
			printf("This alphabet is a vowel.");
			break;
		case 'e':
			printf("This alphabet is a vowel.");
			break;
		case 'i':
			printf("This alphabet is a vowel.");
			break;
		case 'o':
			printf("This alphabet is a vowel.");
			break;
		case 'u':
			printf("This alphabet is a vowel.");
			break;
		default:
			printf("This alphabet is a consonant.");
			break;
	}
	getch();
}
