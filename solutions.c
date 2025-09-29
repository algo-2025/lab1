#include "lab1.h"
#include <math.h>
#include <stdio.h>

// Задача 1 - Чётное или нечётное
int is_even(int n) {
    if (n % 2 == 0) {
        return 1;
    }
    return 0;
}

// Задача 2 - Максимум из трёх чисел
int max_of_three(int a, int b, int c) {
    if (a >= b && a >= c) {
        return a;
    }
    if (b >= a && b >= c) {
        return b;
    }
    return c;
}

// Задача 3 - Знак числа
int sign_of_number(int n) {
    if (n > 0) {
        return 1;
    }
    if (n == 0) {
        return 0;
    }
    return -1;
}

// Задача 4 - Абсолютное значение
int absolute_value(int n) {
    if (n >= 0) {
        return n;
    }
    return -n;
}

// Задача 5 - Треугольник существует
int triangle_exists(int a, int b, int c) {
    if (a >= b + c) {
        return 0;
    } 
    if (b >= a + c) {
        return 0;
    }
    if (c >= a + b) {
        return 0;
    }
    return 1;
}

// Задача 6 - Класс оценок
const char* get_grade(int score) {
    if (score > 90) {
        return "отлично";
    }
    if (score > 74) {
        return "хорошо";
    }
    if (score >= 60) {
        return "удовлетворительно";
    }
    return "неудовлетворительно";
}

// Задача 7 - Евклидово расстояние
double euclidean_distance(double x1, double y1, double x2, double y2) {
    int dx = x2 - x1, dy = y2 - y1;
    return pow(pow(dx, 2) + pow(dy, 2), 0.5);
}

// Задача 8 - Манхэттенское расстояние
int manhattan_distance(int x1, int y1, int x2, int y2) {
    int dx = x2 - x1, dy = y2 - y1;
    return absolute_value(dx) + absolute_value(dy);
}

// Вспомогательная функция для проверки простоты (можно писать сразу в задаче 9, но это плохой тон)
int is_prime(int n) {
    if ((n == 1) || (n == 0)) {
        return 0;
    }
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Задача 9 - Среднее арифметическое простых чисел в интервале
double average_primes_in_interval(int a, int b) {
    double sum_deliteli = 0;
    int cnt_deliteli = 0;
    for (int i = a; i <= b; ++i) {
        if (is_prime(i) == 1) {
            sum_deliteli += i;
            cnt_deliteli += 1;
        }
    }
    if (cnt_deliteli == 0) {
        return 0;
    }
    return sum_deliteli / cnt_deliteli;
}

// Задача 10 - Кратные числа в интервале
int count_multiples(int start, int end, int k) {
    if (k == 0) {
        return 0;
    }
    int cnt = 0;
    for (int i = start; i <= end; ++i) {
        if (i % k == 0) {
            cnt += 1;
        }
    }
    return cnt;
}

// Задача 11 - Високосный год
int is_leap_year(int year) {
    if (year % 4 == 0 && year % 100 != 0) {
        return 1;
    }
    if (year % 400 == 0) {
        return 1;
    }
    return 0;
}

// Задача 12 - Сезон по номеру месяца
const char* season_by_month(int month) {
    switch (month) {
        case 12:
        case 1:
        case 2: 
            return "зима";
        case 3:
        case 4:
        case 5: 
            return "весна";
        case 6:
        case 7:
        case 8: 
            return "лето";
        case 9:
        case 10:
        case 11: 
            return "осень";
        default: 
            return "некорректно";
    }
}

// Задача 13 - День недели
const char* day_of_week(int day_num) {
    switch (day_num) {
        case 1: 
            return "понедельник";
        case 2: 
            return "вторник";
        case 3: 
            return "среда";
        case 4: 
            return "четверг";
        case 5: 
            return "пятница";
        case 6: 
            return "суббота";
        case 7: 
            return "воскресенье";
        default: 
            return "некорректно";
    }
}

// Задача 14 - Подсчёт цифр в числе
int count_digits(int n) {
    int cnt = 0;
    do {
        n /= 10;
        cnt += 1;
    }
    while (n != 0);
    return cnt;
}

// Задача 15 - Реверс числа
int reverse_number(int n) {
    int cnt_digits = count_digits(n);
    int new_num = 0;
    int digit;

    do {
        digit = n % 10;
        new_num += digit * pow(10, cnt_digits - 1);
        n /= 10;
        cnt_digits -= 1;
    }
    while (n != 0);
    return new_num;
}

