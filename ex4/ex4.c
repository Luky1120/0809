#include<stdio.h>
void nrpira(int n) {
	int a = 1;
	for (int i = n; i > 0; i--) {
		for (int j = n; j > i; j--) {
			printf(" ");
		}
		for (int k = 1; k < i*2; k++) {
			printf("%d",a);
		}
		a++;
		printf("\n");
	}

}

int main(void) {
	int n;

	puts("피라미드를 출력합니다.");
	do {
		printf("단수 : ");
		scanf("%d", &n);
	} while (n <= 0);

	nrpira(n);

	return 0;
}