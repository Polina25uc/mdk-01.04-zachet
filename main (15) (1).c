/******************************************************************************
Раздел 6.1 Подвиг 4. В программе ниже объявите функцию с именем pow_n, которая принимает два целочисленных значения 
n, m (m >= 0) и вычисляет n^m. Напомню, что любое число в степени 0 равно 1. 
Вычисленное значение возвращается функцией. Вызовите в функции main функцию pow_n с аргументами 2 и 4. Выведите результат в консоль в виде целого числа.

*******************************************************************************/
#include <stdio.h>

int pow_n(int n, int m) {
    if (m == 0) {
        return 1;
    } else {
        int result = 1;
        for (int i = 0; i < m; i++) {
            result *= n;
        }
        return result;
    }
}

int main() {
    int result = pow_n(2, 4);
    printf("%d\n", result);

    return 0;
}

