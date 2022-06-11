#include <stdio.h>
#include <stdlib.h>

int main(){
	int score;
	system("cls");
	
	printf("\nNhap diem sinh vien: ");
	scanf("%d", &score);
	
	if(score >= 75)
		printf("Xep loai A");
	else if(60 <= score && score < 75)
		printf("Xep loai B");
	else if(45 <= score && score < 60)
		printf("Xep loai C");
	else if(35 <= score && score < 45)
		printf("Xep loai D");
	else
		printf("Xep loai E");
}
