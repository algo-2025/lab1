#include "lab1.h"
#include <math.h>
#include <stdio.h>

// Задача 1 - Чётное или нечётное
int is_even(int n) {
    // TODO: реализовать (!!)
    return n % 2 == 0;
}

// Задача 2 - Максимум из трёх чисел
int max_of_three(int a, int b, int c) {
    // TODO: реализовать (!!)
    int max = a;
    if (b > max) max = b;
    if (c > max) max = c;
    return max;
}

// Задача 3 - Знак числа
int sign_of_number(int n) {
    // TODO: реализовать (!!)
    if (n > 0) return 1;
    else if (n < 0) return -1;
    else return 0;
}

// Задача 4 - Абсолютное значение
int absolute_value(int n) {
    // TODO: реализовать (!!)
    return n < 0 ? -n : n;
}

// Задача 5 - Треугольник существует
int triangle_exists(int a, int b, int c) {
    // TODO: реализовать (!!)
    return (a + b > c) && (a + c > b) && (b + c > a) && (a > 0) && (b > 0) && (c > 0);
}

// Задача 6 - Класс оценок
const char* get_grade(int score) {
    // TODO: реализовать (!!)
    if (score >= 90 && score < 100) return "Отлично";
    if (score >= 75 && score < 90) return "Хорошо";
    if (score >= 60 && score < 75) return "Удовлетворительно";
    if (score >= 0 && score < 60) return "Неудовлетворительно";
    if (score < 0) return "Некорректно";
}

// Задача 7 - Евклидово расстояние
double euclidean_distance(double x1, double y1, double x2, double y2) {
    // TODO: реализовать (!!)
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Задача 8 - Манхэттенское расстояние
int manhattan_distance(int x1, int y1, int x2, int y2) {
    // TODO: реализовать (!!)
    return abs(x2 - x1) + (y2 - y1);
}

// Вспомогательная функция для проверки простоты (можно писать сразу в задаче 9, но это плохой тон)
int is_prime(int n) {
    // TODO: реализовать (!!)
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;
    
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) return 0;
    }
    return 1;
}

// Задача 9 - Среднее арифметическое простых чисел в интервале
double average_primes_in_interval(int a, int b) {
    // TODO: реализовать
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int sum = 0;
    int count = 0;

    for (int i = a; i <= b; i++) {
        if (is_prime(i)) {
            sum += i;
            count++;

        }

    }

     if (count == 0) return 0.0;
    return (double)sum / count;
}

// Задача 10 - Кратные числа в интервале
int count_multiples(int start, int end, int k) {
    // TODO: реализовать (!!)
    if (k == 0) return 0;
    
    int count = 0;
    for (int i = start; i <= end; i++) {
        if (i % k == 0) {
            count++;
        }
    }
    return count;
}

// Задача 11 - Високосный год
int is_leap_year(int year) {
    // TODO: реализовать (!!)
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

// Задача 12 - Сезон по номеру месяца
const char* season_by_month(int month) {
    // TODO: реализовать (!!)
    switch (month) {
        case 12: case 1: case 2: return "Зима";
        case 3: case 4: case 5: return "Весна";
        case 6: case 7: case 8: return "Лето";
        case 9: case 10: case 11: return "Осень";
        default: return "Некорректно";
    }
}

// Задача 13 - День недели
const char* day_of_week(int day_num) {
    // TODO: реализовать (!!)
    switch (day_num) {
        case 1: return "Понедельник";
        case 2: return "Вторник";
        case 3: return "Среда";
        case 4: return "Четверг";
        case 5: return "Пятница";
        case 6: return "Суббота";
        case 7: return "Воскресенье";
        default: return "Некорректно";
    }
}

// Задача 14 - Подсчёт цифр в числе
int count_digits(int n) {
    // TODO: реализовать (!!)
    if (n == 0) return 1;
    
    int count = 0;
    n = absolute_value(n);
    
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

// Задача 15 - Реверс числа
int reverse_number(int n) {
    // TODO: реализовать (!!)
    int reversed = 0;
    int sign = n < 0 ? -1 : 1;
    n = absolute_value(n);
    
    while (n > 0) {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }
    
    return reversed * sign;
}

