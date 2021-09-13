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
	printf("배열의 크기 입력 :");
	scanf("%d", &size);
	int* x = (int*)malloc(sizeof(int) * size);
	int* y = (int*)malloc(sizeof(int) * size);

	srand(time(NULL));

	printf("배열 x를 임의의 값으로 초기화 했습니다.\n");
	for (int i = 0; i <size; i++) {
		x[i] = 100 + rand() % 100;
		printf("x[%d] = %d, ", i, x[i]);
	}
	printf("\n");
	printf("배열 x의 모든 요소를 배열 y에 복사했습니다.\n");
	arr_copy(x, y, size);
	arr_print_y(y, size);

	printf("\n");
	printf("배열2를 역순으로 바꿉니다.");
	printf("배열1을 출력합니다.\n");
	arr_print_x(x, size);

	printf("\n");
	printf("배열2를 출력합니다.\n");
	ary_reverse(y, size);
	printf("\n");

	free(x);
	free(y);

	return 0;
}
