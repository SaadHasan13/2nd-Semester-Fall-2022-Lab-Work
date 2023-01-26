#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>
#define CharSetSize 72

char char_set[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789!@#$%^&*()";

void Random_PWGenerator(char Password[], int Length); 
int main() {
    srand(time(0));
    int LENGTH;
    printf("Enter length for your password: ");
    scanf("%d",&LENGTH);
    if(LENGTH < 4){
        	printf("Your password must be four or more characters longer.");
	}
    char password[LENGTH + 1];
    Random_PWGenerator(password, LENGTH);
    printf("\nGenerated password: %s\n", password);
    printf("\nPress Alt+F4 to exit the program.");
    getch();
}
void Random_PWGenerator(char Password[], int Length) {
    int x;
    int UpChar, LowChar, NumChar, SPChar;
    for (x = 0; x < Length; x++) {
        Password[x] = char_set[rand() % CharSetSize];
        }
        Password[Length] = '\0';
    }
    
