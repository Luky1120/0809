#include<stdio.h>

typedef struct {
	char name[20];
	int height;
	float vision;
}Physical;

float ave_height(const Physical dat[], int len) {
	double sum = 0;

	for (int i = 0; i < len; i++) {
		sum += dat[i].height;
	}
	return (float)sum / len;
}

int main(void) {
	
	Physical p[] = { {"������",162,0.7},{"������",173,0.7},
		{"������",175,2.0},{"ȫ����",171,1.2},
		{"�ڿ��",169, 0.8}
	};

	int len = sizeof(p) / sizeof(p[0]);//����ü �迭 ũ��

	puts("�� ��ü�˻� ǥ ��");
	puts("�̸�\t Ű  �÷�  ");
	puts("------------------");

	for (int i = 0; i < len; i++) {
		printf("%s\t%4d %5.1f\n", p[i].name, p[i].height, p[i].vision);
	}
	printf("\n��� Ű : %5.1f cm\n", ave_height(p, len));
	printf("\n�÷��� ����\n");
	for (float i = 0.1; i <= 2.1; i += 0.1) {
		printf("%0.1f ~ : ", i);
		for (int j = 0; j < len; j++) {
			int a = i * 10;
			int b = p[j].vision * 10;
			if (a == b) {
				printf(" *");
			}
		}
		printf("\n");
	}

	return 0;
}