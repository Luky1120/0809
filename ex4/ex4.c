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

	puts("�Ƕ�̵带 ����մϴ�.");
	do {
		printf("�ܼ� : ");
		scanf("%d", &n);
	} while (n <= 0);

	nrpira(n);

	return 0;
}