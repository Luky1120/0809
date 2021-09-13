#include<stdio.h>

int sumof(int a, int b) {
	int max, min, sum = 0;
	if (a > b) {
		max = a;
		min = b;
	}
	else {
		max = b;
		min = a;
	}

	for (int i = min; i <= max; i++) {
		sum += i;
	}
	return sum;
}

int main(void) {
	int a, b;
	int sum;

	printf("a의 값 : ");
	scanf("%d", &a);
	printf("b의 값 : ");
	scanf("%d", &b);

	printf("정수 a, b사이의 모든 합은 %d입니다.\n", sumof(a, b));

	return 0;
}