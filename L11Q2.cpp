#include<stdio.h>
#include<conio.h>
main(){
	int x,y;
	printf("Enter the no. of elements in an array:\n ");
	scanf("%d",&x);
	
	int array[y];
	printf("Enter the elements in an array:\n ");
	
	for(y=0; y<x; y++)
	{
		scanf("%d",&array[y]);
	}
	
	int Max = array[0], Min = array[0], MaxIndex, MinIndex;
	for(y=0; y<x; y++)
	{
		if(array[y] > Max)
		{
			Max = array[y];
			MaxIndex = y;
		}
		if(array[y] < Min)
		{
			Min = array[y];
			MinIndex = y;
		}
	}
	
	printf("Maximum element in array: %d", Max);
	printf("\nIndex of maximum element in array: %d", MaxIndex);
	printf("\nMinimum element in array: %d", Min);
	printf("\nIndex of minimum element in array: %d", MinIndex);
	
	getch();
}
