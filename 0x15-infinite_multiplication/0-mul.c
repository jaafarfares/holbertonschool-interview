#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 * is_positive_integer - .......;
 * @str: ..........
 * Return: .........
 *
 */
int is_positive_integer(char *str) {
    while (*str) {
        if (*str < '0' || *str > '9') {
            return 0;
        }
        str++;
    }
    return 1;
}

void multiply(char *num1, char *num2) {
    int len1 = 0, len2 = 0;
    while (num1[len1]) {
        len1++;
    }
    while (num2[len2]) {
        len2++;
    }

    int *result = calloc(len1 + len2, sizeof(int));

    for (int i = len1 - 1; i >= 0; i--) {
        for (int j = len2 - 1; j >= 0; j--) {
            int product = (num1[i] - '0') * (num2[j] - '0');
            int pos1 = i + j, pos2 = i + j + 1;
            int sum = product + result[pos2];
            result[pos1] += sum / 10;
            result[pos2] = sum % 10;
        }
    }

    int printed = 0;
    for (int i = 0; i < len1 + len2; i++) {
        if (result[i] || printed) {
            printf("%d", result[i]);
            printed = 1;
        }
    }

    if (!printed) {
        printf("0");
    }

    printf("\n");

    free(result);
}

int main(int argc, char *argv[]) {
    if (argc != 3 || !is_positive_integer(argv[1]) || !is_positive_integer(argv[2])) {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}

