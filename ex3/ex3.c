#include<stdio.h>

int numSize(int a, int count) {
	

	if (a / 10 > 0) {
		a = a / 10;
		count++;
		return numSize(a, count);
	}
	else {
		count++;
		return count;
	}
	/*int count = 0;*/
	/*if(a>0){
		while(1){
			if (a / 10 != 0) {
			a = a / 10;
			count++;
			}
			else {
			count++;
			return count;
			}
		}
	}
	else {
		printf("양의 정수를 입력해주세요.\n");
		return 0;
	}*/
}

int main(void) {
	int a;
	int count = 0;

	printf("양의 정수를 입력하시오. : ");
	scanf("%d", &a);

	printf("그 수의 자릿수는 %d입니다.", numSize(a, count));
	return 0;
}