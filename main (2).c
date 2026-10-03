/*
 * Студент: Шпаков Максим Денисович
 * Группа: 1-1 Прикладная информатика
 * Назначение: Научиться искать первые индексы макс и мин значений, разворачивать массив с помощью обмена элементов
 */

#include <stdio.h>
#define MAX_SIZE 100

int main(void) {
    int a[MAX_SIZE], n, x, y;

    printf("Enter n (1..100): ");
    if (scanf("%d", &n) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (n < 1 || n > MAX_SIZE) {
        printf("Size error\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        if (scanf("%d", &a[i]) != 1) {
            printf("Input error\n");
            return 1;
        }
        if (a[i] < -1000 || a[i] > 1000) {
            printf("Value error\n");
            return 1;
        }
    }

    printf("Enter x (-1000..1000): ");
    if (scanf("%d", &x) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (x < -1000 || x > 1000) {
        printf("Value error\n");
        return 1;
    }

    printf("Enter y (-1000..1000): ");
    if (scanf("%d", &y) != 1) {
        printf("Input error\n");
        return 1;
    }
    if (y < -1000 || y > 1000) {
        printf("Value error\n");
        return 1;
    }

    printf("Before:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    int first = -1, last = -1, count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] == x) {
            if (first == -1) {
                first = i;
            }
            last = i;
            count++;
            a[i] = y;
        }
    }

    printf("After:");
    for (int i = 0; i < n; i++) {
        printf(" %d", a[i]);
    }
    printf("\n");

    if (count == 0) {
        printf("Not found\n");
        printf("Count = 0\n");
    } else {
        printf("Count = %d\n", count);
        printf("First index = %d\n", first);
        printf("Last index = %d\n", last);
    }

    return 0;
}