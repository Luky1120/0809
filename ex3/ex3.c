#include<stdio.h>

int numSize(int a, int count) {
	

	if (a / 10 > 0) {
		a = a / 10;
		count++;
		return numSize(a, count);
	}
	else {
		count++;
		return count;
	}
	/*int count = 0;*/
	/*if(a>0){
		while(1){
			if (a / 10 != 0) {
			a = a / 10;
			count++;
			}
			else {
			count++;
			return count;
			}
		}
	}
	else {
		printf("���� ������ �Է����ּ���.\n");
		return 0;
	}*/
}

int main(void) {
	int a;
	int count = 0;

	printf("���� ������ �Է��Ͻÿ�. : ");
	scanf("%d", &a);

	printf("�� ���� �ڸ����� %d�Դϴ�.", numSize(a, count));
	return 0;
}