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

	printf("a�� �� : ");
	scanf("%d", &a);
	printf("b�� �� : ");
	scanf("%d", &b);

	printf("���� a, b������ ��� ���� %d�Դϴ�.\n", sumof(a, b));

	return 0;
}