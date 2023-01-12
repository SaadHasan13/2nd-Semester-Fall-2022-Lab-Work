#include<stdio.h>
#include<conio.h>
#include<math.h>
float RA_Triangle(float B, float H); // Declaring a function for the formula
main(){
	float Base, Height, Area;
	printf("Enter base and height of triangle: ");
	scanf("%f %f", &Base, &Height);
	
	Area=RA_Triangle(Base, Height); // Calling the function to perform a calculation
	printf("The area of the triangle is: %.2f", Area);
	getch();
}
float RA_Triangle(float B, float H){ // Defining function to perform a calculation
	float A;
	A = 0.5 * (B * H);
}
