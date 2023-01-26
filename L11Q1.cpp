#include<stdio.h>
#include<conio.h>
main(){
	int Array[12];
	int k;
	
	printf("Enter 12 integers: \n");
	
	//Print and store values
	for(k=0; k<12; k++)
	{
		scanf("%d", &Array[k]);
	}
	//Print array in reverse order
	printf("Inputs in reverse order: \n");
	for(k=11; k>=0; k--)
	{
		printf("%d\n", Array[k]);
	}
	getch();
}
