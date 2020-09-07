/*Ввести натуральное число и найти сумму его цифр. Организовать ввод числа так, что-
бы нельзя было ввести отрицательное число или ноль.*/

#include <stdio.h>
#include <iostream>
#include <locale.h>
#pragma warning(disable : 4996)

int main()
{
    int N, sum = 0;
    setlocale(LC_ALL, "Rus");
    do {
        printf("\nВведите натуралное число: ");
        scanf("%d", &N);
    } while (N <= 0);
    while (N > 0) {
        sum += N % 10;
        N /= 10;
    }
    printf("Сумма цифр этого числа равна %d\n", sum);
    getchar();
}