#include <stdio.h>

int max4(int a, int b, int c, int d) {
	int max;
	max = a;
	if (b > max)max = b;
	if (c > max)max = c;
	if (d > max)max = d;

	return max;

	/*int max1, max2;*/
	/*if (a < b) {
		max1 = b;
	}
	else {
		max1 = a;
	}

	if (c < d) {
		max2 = d;
	}
	else {
		max2 = c;
	}

	if (max1 < max2) {
		return max2;
	}
	else {
		return max1;
	}*/

	/*if (a < b) {
		if (c < d) {
			if (b < d) {
				return d;
			}
			else {
				return b;
			}
		}
		else {
			if (b < c) {
				return c;
			}
			else {
				return b;
			}
		}
	}
	else {
		if (c < d) {
			if (a < d) {
				return d;
			}
			else {
				return a;
			}
		}
		else {
			if (b < c) {
				return c;
			}
			else {
				return a;
			}
		}
	}*/
}

int main(void) {
	int a, b, c, d;
	
	printf("a�� �� : ");
	scanf("%d", &a);
	printf("b�� �� : ");
	scanf("%d", &b);
	printf("c�� �� : ");
	scanf("%d", &c);
	printf("d�� �� : ");
	scanf("%d", &d);

	printf("�ִ밪�� %d�Դϴ�.\n", max4(a, b, c, d));
	return 0;
}