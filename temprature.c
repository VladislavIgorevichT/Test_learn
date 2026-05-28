#include <stdio.h>

/* Печать таблицы температур по Фаренгейту и Цельсию для 
fahr = 0, 20, ..., 300 */

int main()
{
    float fahr, celsius;
    int lower, upper, step;
    
    lower = 0;   /* нижняя граница таблицы */
    upper = 300; /* верхняя граница */
    step = 20;   /* шаг */
    
    fahr = lower;
    while (fahr <= upper) {
        celsius = (5.0 / 9.0) * (fahr - 32);
        printf("%3.0f %7.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}