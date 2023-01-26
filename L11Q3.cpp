#include<stdio.h>
#include<conio.h>
main(){
	int x,y,z, flag=0;
	printf("Enter the no. of elements in an array: ");
	scanf("%d",&x);
	
	int Check[y];
	printf("Enter the elements for the array: ");
	for(y=0; y<x; y++)
	{
		scanf("%d",&Check[y]);
	}
	printf("Enter the element to search for: ");
	scanf("%d",&z);
	for(y=0; y<x; y++)
	{
		if(Check[y]==z)
		{
			printf("Element found at index %d\n", y);
			flag = 1;
			break;
		}
	} 
	if(flag == 0)
	{
		printf("Element not found in the array.\n");
	}
	getch();
}
