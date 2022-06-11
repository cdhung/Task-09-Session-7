#include <stdio.h>
#include <stdlib.h>

int main(){
	int a = 0, b = 0;
	system("cls");
	
	printf("\nPlease enter number a = ");
	scanf("%d", &a);
	printf("\nPlease enter number b = ");
	scanf("%d", &b);
	
	if (a - b == a)
		printf("Subtraction is valid =  %d", a);
	else if (a - b == b)
		printf("Subtraction is valid =  %d", b);
	else
		printf("Subtraction is valid different %d or %d", a, b);
}
