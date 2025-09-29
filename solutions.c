#include "lab1.h"
#include <math.h>
#include <stdio.h>

// Задача 1 - Чётное или нечётное
int is_even(int n) { 
    if (n % 2 == 0)
        return 1;
    return 0;
}

// Задача 2 - Максимум из трёх чисел
int max_of_three(int a, int b, int c){
    if (a >= b && a >= c)
        return a;
    else if (b >= a && b >= c)
        return b;
    else 
        return c;
}

// Задача 3 - Знак числа
int sign_of_number(int n){ // -1, 0, 1
    if (n < 0)
        return -1;
    else if (n == 0)
        return 0;
    else
        return 1;
}

// Задача 4 - Абсолютное значение
int absolute_value(int n){
    if (n < 0)
        return -n;
    else 
        return n;
}

// Задача 5 - Треугольник существует
int triangle_exists(int a, int b, int c){ 
    if (a < b + c && b < a + c && c < a + b)
        return 1;
    else
        return 0;
}

// Задача 6 - Класс оценок
const char* get_grade(int score){ 
    if (score < 60)
        return "неудовлетворительно";
    else if (score < 74)
        return "удовлетворительно";
    else if (score < 91)
        return "хорошо";
    else
        return "отлично";
}

// Задача 7 - Евклидово расстояние между точками
double euclidean_distance(double x1, double y1, double x2, double y2){
    return pow(pow(x1 - x2, 2) + pow(y1 - y2, 2), 0.5);
}

// Задача 8 - Манхэттенское расстояние между точками
int manhattan_distance(int x1, int y1, int x2, int y2){
    return absolute_value(x1 - x2) + absolute_value(y1 - y2);
}

// Задача 9 - Простые числа в интервале
int is_prime(int a){
    if (a == 1)
        return 0;
    for (int i = 2; i < (int)(pow(a, 0.5)) + 1; i++){
        if (a % i == 0)
            return 0;
    }
    return 1;
}

double average_primes_in_interval(int a, int b){
    int amount = 0;
    int sum = 0;
    for (int i = a; i < b + 1; i++){
        if (is_prime(i) == 1){
            amount += 1;
            sum += i;
        }
    }
    return sum/amount;
}

// Задача 10 - Кратные числа в интервале
int count_multiples(int start, int end, int k){
    int count = 0;
    for (int i = start; i < end + 1; i++){
        if (i % k == 0)
            count += 1;
    }
    return count;
}

// Задача 11 - Високосный год
int is_leap_year(int year){ 
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
}  

// Задача 12 - Сезон по номеру месяца
const char* season_by_month(int month){
    switch (month){
        case 1: return("зима");
        case 2: return("зима");
        case 3: return("весна");
        case 4: return("весна");
        case 5: return("весна");
        case 6: return("лето");
        case 7: return("лето");
        case 8: return("лето");
        case 9: return("осень");
        case 10: return("осень");
        case 11: return("осень");
        case 12: return("зима");
        default: return("некорректно");
    }
}
    

// Задача 13 - День недели
const char* day_of_week(int day_num){
    switch(day_num){
        case 1: return "понедельник";
        case 2: return "вторник";
        case 3: return "среда";
        case 4: return "четверг";
        case 5: return "пятница";
        case 6: return "суббота";
        case 7: return "воскресение";
        default: return "некорректно";
        
    }
}

// Задача 14 - Подсчёт цифр в числе
int count_digits(int n){
    int digit = 0;
    int amount = 0;
    do {
    digit = n % 10;
    n = n / 10;
    amount += 1;
    } while (n > 0);
    return amount;
}

// Задача 15 - Реверс числа
int reverse_number(int n){
    int digit = 0;
    int new_number = 0;
    do {
    digit = n % 10;
    new_number += digit * pow(10, count_digits(n) - 1);
    n = n / 10;
    } while (n > 0);
    return new_number;
}

