#include <stdio.h>
#include <stdlib.h>

int main(){
	int a, b;
	system("cls");
	
	printf("\nPlease enter number a = ");
	scanf("%d", &a);
	printf("\nPlease enter number b = ");
	scanf("%d", &b);
	
	if (a*b==1000)
		printf("%d * %d = 1000", a, b);
	else if (a*b>1000)
		printf("%d * %d > 1000", a, b);
	else
		printf("%d * %d < 1000", a, b);
}
