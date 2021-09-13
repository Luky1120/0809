#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int maxof(const int a[], int n) {
	int i;

	int max = a[0];
	for (i = 1; i < n; i++) {
		if (a[i]>max) {
			max = a[i];
		}
	}
	return max;
}

int main(void) {
	int i;
	int height[10];
	const int LEN = sizeof(height) / sizeof(height[0]);

	srand(time(NULL));
	for (i = 0; i < LEN; i++) {
		height[i] = 100 + rand() % 100;
		printf("height[%d] = %d\n", i, height[i]);
	}

	printf("최댓값은 %d입니다. \n", maxof(height, LEN));

	return 0;
}