#include<stdio.h>
void ary_reverse(int a[], int len) {
	int temp;
	
	for (int i = 0; i < (len/2); i++) {
		temp = a[i];
		a[i] = a[len-1-i];
		a[len - 1-i] = temp;
	}
	for (int i = 0; i < len; i++) {
		printf("%d ", a[i]);
	}
	return 0;
}

int main(void) {
	int i;
	int height[] = { 22,57,11,32,91,68,70 };
	int LEN = sizeof(height) / sizeof(height[0]);

	ary_reverse(height, LEN);

	return 0;
}