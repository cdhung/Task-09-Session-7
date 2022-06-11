#include <stdio.h>
#include <stdlib.h>

int main(){
	int basic, bonus;
	char grade;
	
	printf("\nNhap muc luong: ");
	scanf("%d", &basic);
	
	printf("\nXep loai (A B C ...): ");
	getchar();
	scanf("%c", &grade);
	
	if(grade == 'A')
		bonus = 300;
	else if(grade == 'B')
		bonus = 250;
	else
		bonus = 100;
	printf("Luong cuoi thang = %d",basic+bonus);
	
}
