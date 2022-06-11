#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	system("cls	");
	
	printf("\nPlease enter your first number: ");
	scanf("%d", &a);
	printf("\nPlease enter your second number: ");
	scanf("%d", &b);
	
	if (a%b == 0 )
		printf("\n%d is divisible for %d\n", a, b);
	else
		printf("\n%d is not divisible for %d\n", a, b);
}
