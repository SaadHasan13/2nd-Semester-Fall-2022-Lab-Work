#include<stdio.h>
#include<conio.h>
main(){
	float mark1,mark2,mark3,mark4,mark5,avg;
    printf("Enter the marks of 5 subjects:  ");
    scanf("%f%f%f%f%f",&mark1,&mark2,&mark3,&mark4,&mark5);
    avg=(mark1+mark2+mark3+mark4+mark5)/5;
    if(avg>=90)
    {
        printf("Grade A");
    }
    else if(avg>=80 && avg<90)
    {
        printf("Grade B");
    }
    else if(avg>=70 && avg<80)
    {
        printf("Grade C");
    }
    else if(avg>=60 && avg<70)
    {
        printf("Grade D");
    }
    else if(avg<60)
    {
        printf("Grade F");
    }
    getch();
}
