/*Задача 3.	Даны координаты двух точек на плоскости. Если хотя бы одна из них
 * лежит на какой-нибудь оси, вывести сообщение об этом; если они обе находятся
 * в одной четверти, найти расстояние между ними; иначе – найти точку,
 * наиболее удаленную от центра координат.*/
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    system("chcp 65001");/*подключение русского языка*/
    double x, y, x1, y1, l;

    printf("Введите координаты для точки M:\n"); /*вводим координаты для точки M: (х , у)*/
    do {
        printf("x="); /*безопастный ввод*/
        fflush(stdin);
    } while (scanf("%lf", &x) != 1);
    do {
        printf("y=");
        fflush(stdin);
    } while (scanf("%lf", &y) != 1);
    printf("Координаты точки М: x=%lf , y=%lf\n", x, y); //*вывод*//*
    printf("Введите координаты для точки K :\n"); /*вводим координаты для точки K: (x1 , y1)*/
    do {
        printf("x1=");
        fflush(stdin);
    } while (scanf("%lf", &x1) != 1);
    do {
        printf("y1=");
        fflush(stdin);
    } while (scanf("%lf", &y1) != 1);

    printf("Координаты для точки K: x1=%lf , y1=%lf\n", x1, y1);

    if (x == 0 || y == 0 || x1 == 0 || y1 == 0) { /*проверяем, лежит ли точка на одной из осей*/
        printf("Одна из точек лежит на оси");/*если да, выводим сообщение*/
        return 0;
    } else {
        if ((x > 0 && y > 0 && x1 > 0 && y1 > 0)
            || (x > 0 && y < 0 && x1 > 0 && y1 < 0)
            || (x < 0 && y < 0 && x1 < 0 && y1 < 0)
            || (x < 0 && y > 0 && x1 < 0 && y1 > 0)) { /*проверяем лежат ли точки в одной четверти*/
            l = sqrt(pow((x - x1), 2) + pow((y - y1), 2));
            printf("\nточки лежат в одной четверти и расстоянсие между ними l = %lf", l);
        } else if (fabs(x) + fabs(y) > fabs(x1) + fabs(y1)) {/*проверяем какая точка лежит дальше от центра координат*/
            printf("\nточка М является наиболее удаленной от центра координат");
        } else if (fabs(x) + fabs(y) < fabs(x1) + fabs(y1)) {
            printf("\nточка K является наиболее удаленной от центра координат");
        } else
            printf("\nточки равноудаленны от центра координат");
    }
    return 0;
}
