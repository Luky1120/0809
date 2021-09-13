#include <stdio.h>

#define MAX 100
int Binary(int number, int i, char* arr) {
    char dchar[] = "01";
    int digits = 0;

    if (number != 0) {
        while (number) {
            arr[digits++] = dchar[number % i];
            number /= i;
        }
    }
    else arr[digits++] = dchar[0];
    return digits;
}
int Octal(int number, int i, char* arr) {
    char dchar[] = "01234567";
    int digits = 0;

    if (number != 0) {
        while (number) {
            arr[digits++] = dchar[number % i];
            number /= i;
        }
    }
    else arr[digits++] = dchar[0];
    return digits;
}
int Hexadecimal(int number, int i, char* arr) {
    char dchar[] = "0123456789ABCDEF";
    int digits = 0;

    if (number != 0) {
        while (number) {
            arr[digits++] = dchar[number % i];
            number /= i;
        }
    }
    else arr[digits++] = dchar[0];
    return digits;
}
void main(void) {
    int i = 0;
    int insertNumber;
    int binaryNumber;
    char arr[MAX];
    while (1) {
        printf("\n10진수 변환 : ");
        scanf_s("%d", &insertNumber);
        if (insertNumber <= 0) {
            system("cls");
            printf("10진수 변환 : ");
            scanf_s("%d", &insertNumber);
        }

        printf("진수 변환(2,8,16) : ");
        scanf_s("%d", &binaryNumber);
        if (binaryNumber == 2) {
            printf("2진수\n");
            for (int i = Binary(insertNumber, binaryNumber, arr) - 1; i >= 0; i--) {
                printf("%c ", arr[i]);
            }
        }
        else if (binaryNumber == 8) {
            printf("\n8진수\n");
            for (int i = Octal(insertNumber, binaryNumber, arr) - 1; i >= 0; i--) {
                printf("%c ", arr[i]);
            }
        }
        else if (binaryNumber == 16) {
            printf("\n16진수\n");
            for (int i = Hexadecimal(insertNumber, binaryNumber, arr) - 1; i >= 0; i--) {
                printf("%c ", arr[i]);
            }
        }
        else {
            system("cls");
            printf("진수 변환(2,8,16) : ");
            scanf_s("%d", &binaryNumber);
        }
        return 0;
    }
}
