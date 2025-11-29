#include "lab1.h"
#include <math.h>
#include <stdio.h>

// Задача 1 - Чётное или нечётное
int is_even(int n) {
    return (n % 2 == 0) ? 1 : 0;
}

// Задача 2 - Максимум из трёх чисел
int max_of_three(int a, int b, int c) {
    int max = a;
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
}

// Задача 3 - Знак числа
int sign_of_number(int n) {
    if (n > 0) {
        return 1;
    }
    if (n < 0) {
        return -1;
    }
    return 0;
}

// Задача 4 - Абсолютное значение
int absolute_value(int n) {
    return (n < 0) ? -n : n;
}

// Задача 5 - Треугольник существует
int triangle_exists(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }
    if (a + b <= c) {
        return 0;
    }
    if (a + c <= b) {
        return 0;
    }
    if (b + c <= a) {
        return 0;
    }
    return 1;
}

// Задача 6 - Класс оценок
const char* get_grade(int score) {
    if (score < 0 || score > 100) {
        return "некорректно";
    }
    if (score >= 90) {
        return "отлично";
    }
    if (score >= 75) {
        return "хорошо";
    }
    if (score >= 60) {
        return "удовлетворительно";
    }
    return "неудовлетворительно";
}

// Задача 7 - Евклидово расстояние
double euclidean_distance(double x1, double y1, double x2, double y2) {
    double dx = x2 - x1;
    double dy = y2 - y1;
    return sqrt(dx * dx + dy * dy);
}

// Задача 8 - Манхэттенское расстояние
int manhattan_distance(int x1, int y1, int x2, int y2) {
    int dx = absolute_value(x2 - x1);
    int dy = absolute_value(y2 - y1);
    return dx + dy;
}

// Вспомогательная функция для проверки простоты (можно писать сразу в задаче 9, но это плохой тон)
int is_prime(int n) {
    if (n < 2) {
        return 0;
    }
    if (n == 2) {
        return 1;
    }
    if (n % 2 == 0) {
        return 0;
    }
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Задача 9 - Среднее арифметическое простых чисел в интервале
double average_primes_in_interval(int a, int b) {
    if (a > b) {
        int tmp = a;
        a = b;
        b = tmp;
    }

    double sum = 0.0;
    int count = 0;

    for (int value = a; value <= b; value++) {
        if (is_prime(value)) {
            sum += value;
            count++;
        }
    }

    if (count == 0) {
        return 0.0;
    }
    return sum / count;
}

// Задача 10 - Кратные числа в интервале
int count_multiples(int start, int end, int k) {
    if (k == 0) {
        return 0;
    }
    if (start > end) {
        int tmp = start;
        start = end;
        end = tmp;
    }

    int count = 0;
    for (int value = start; value <= end; value++) {
        if (value % k == 0) {
            count++;
        }
    }
    return count;
}

// Задача 11 - Високосный год
int is_leap_year(int year) {
    if (year % 400 == 0) {
        return 1;
    }
    if (year % 100 == 0) {
        return 0;
    }
    if (year % 4 == 0) {
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
    int value = n;
    if (value < 0) {
        value = -value;
    }

    int count = 0;
    do {
        count++;
        value /= 10;
    } while (value != 0);

    return count;
}

// Задача 15 - Реверс числа
int reverse_number(int n) {
    int value = n;
    int sign = 1;
    if (value < 0) {
        sign = -1;
        value = -value;
    }

    int result = 0;
    do {
        int digit = value % 10;
        result = result * 10 + digit;
        value /= 10;
    } while (value != 0);

    return sign * result;
}

