#include<stdio.h>
#include<conio.h>
main(){
	int R, C;
	
	for(R=0; R<=6; R++){
		for(C=0; C<=R; C++){
			printf("%d",C);
		}
		printf("\n");
	}
	
	for(R=0; R<=5; R++){
		for(C=5; C>=R; C--){
			printf("%d",C);
		}
		printf("\n");
	}
	getch();
}
