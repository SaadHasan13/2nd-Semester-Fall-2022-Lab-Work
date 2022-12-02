#include<stdio.h>
#include<conio.h>
int main()
{
    int AGE1, AGE2, AGE3;
    printf("Enter ages of three people: \n");
    scanf("%d%d%d", &AGE1, &AGE2, &AGE3);
    if (AGE1 <= AGE2 && AGE1 <= AGE3)
	
        printf("Wasim Akram is the youngest.\n");
    else if (AGE2 <= AGE1 && AGE2 <= AGE3)
        printf("Javed Miandad is the youngest.\n");
    else
        printf("Imran Khan is the youngest.\n");
    getch();
}
