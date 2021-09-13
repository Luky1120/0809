#include<stdio.h>
#include<time.h>
#include<stdlib.h>
void ary_reverse(int a[], int size) {
	int temp;

	for (int i = 0; i < (size / 2); i++) {
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
	for (int i = 0; i < size; i++) {
		printf("y[%d] = %d, ", i, a[i]);
	}
	return 0;
}

int arr_copy(int a[], int b[],int size) {
	for (int i = 0; i < size; i++) {
		b[i] = a[i];
	}
	return b;
}
void arr_print_x(int a[], int size) {
	for (int i = 0; i < size; i++) {
		printf("x[%d] = %d, ", i, a[i]);
	}
}

void arr_print_y(int a[],int size) {
	for (int i = 0; i < size; i++) {
		printf("y[%d] = %d, ", i, a[i]);
	}
}

int main(void) {
	int size = 0;
	printf("�迭�� ũ�� �Է� :");
	scanf("%d", &size);
	int* x = (int*)malloc(sizeof(int) * size);
	int* y = (int*)malloc(sizeof(int) * size);

	srand(time(NULL));

	printf("�迭 x�� ������ ������ �ʱ�ȭ �߽��ϴ�.\n");
	for (int i = 0; i <size; i++) {
		x[i] = 100 + rand() % 100;
		printf("x[%d] = %d, ", i, x[i]);
	}
	printf("\n");
	printf("�迭 x�� ��� ��Ҹ� �迭 y�� �����߽��ϴ�.\n");
	arr_copy(x, y, size);
	arr_print_y(y, size);

	printf("\n");
	printf("�迭2�� �������� �ٲߴϴ�.");
	printf("�迭1�� ����մϴ�.\n");
	arr_print_x(x, size);

	printf("\n");
	printf("�迭2�� ����մϴ�.\n");
	ary_reverse(y, size);
	printf("\n");

	free(x);
	free(y);

	return 0;
}
