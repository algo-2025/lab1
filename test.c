#include <assert.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "lab1.h"

void log_result(const char* task, const char* message) {
    printf("[%s] %s\n", task, message);
}

int main() {
    // ====== Задача 1: Чётное или нечётное ======
    log_result("Задача 1", "Начинаем тестирование");
    assert(is_even(0) == 1);
    assert(is_even(2) == 1);
    assert(is_even(1) == 0);
    assert(is_even(3) == 0);
    assert(is_even(-11) == 0);
    assert(is_even(555555) == 0);
    assert(is_even(-4) == 1);
    assert(is_even(10) == 1);
    assert(is_even(11) == 0);
    log_result("Задача 1", "Все тесты пройдены");

    // ====== Задача 2: Максимум из трёх чисел ======
    log_result("Задача 2", "Начинаем тестирование");
    assert(max_of_three(1, 2, 3) == 3);
    assert(max_of_three(3, 2, 1) == 3);
    assert(max_of_three(2, 3, 1) == 3);
    assert(max_of_three(-1, -2, -3) == -1);
    assert(max_of_three(5, 5, 5) == 5);
    assert(max_of_three(0, 0, 0) == 0);
    assert(max_of_three(0, 5, -5) == 5);
    log_result("Задача 2", "Все тесты пройдены");

    // ====== Задача 3: Знак числа ======
    log_result("Задача 3", "Начинаем тестирование");
    assert(sign_of_number(2) == 1);
    assert(sign_of_number(0) == 0);
    assert(sign_of_number(-2) == -1);
    assert(sign_of_number(100000) == 1);
    assert(sign_of_number(-100000) == -1);
    log_result("Задача 3", "Все тесты пройдены");

    // ====== Задача 4: Абсолютное значение ======
    log_result("Задача 4", "Начинаем тестирование");
    assert(absolute_value(2) == 2);
    assert(absolute_value(0) == 0);
    assert(absolute_value(-2) == 2);
    assert(absolute_value(100000) == 100000);
    assert(absolute_value(-100000) == 100000);
    log_result("Задача 4", "Все тесты пройдены");

    // ====== Задача 5: Треугольник существует ======
    log_result("Задача 5", "Начинаем тестирование");
    assert(triangle_exists(3, 4, 5) == 1);
    assert(triangle_exists(4, 5, 3) == 1);
    assert(triangle_exists(5, 3, 4) == 1);
    assert(triangle_exists(5, 5, 5) == 1);
    assert(triangle_exists(1, 1, 3) == 0);
    assert(triangle_exists(0, 1, 2) == 0);
    assert(triangle_exists(-1, 2, 3) == 0);
    assert(triangle_exists(100000, 1, 1) == 0);
    assert(triangle_exists(0, 0, 0) == 0);
    log_result("Задача 5", "Все тесты пройдены");

    // ====== Задача 6: Класс оценок ======
    log_result("Задача 6", "Начинаем тестирование");
    assert(strcmp(get_grade(59), "неудовлетворительно") == 0);
    assert(strcmp(get_grade(60), "удовлетворительно") == 0);
    assert(strcmp(get_grade(74), "удовлетворительно") == 0);
    assert(strcmp(get_grade(75), "хорошо") == 0);
    assert(strcmp(get_grade(89), "хорошо") == 0);
    assert(strcmp(get_grade(90), "отлично") == 0);
    assert(strcmp(get_grade(100), "отлично") == 0);
    assert(strcmp(get_grade(-1), "неверный балл") == 0);
    assert(strcmp(get_grade(101), "неверный балл") == 0);
    log_result("Задача 6", "Все тесты пройдены");

    // ====== Задача 7: Евклидово расстояние ======
    log_result("Задача 7", "Начинаем тестирование");
    assert(fabs(euclidean_distance(0, 0, 3, 4) - 5.0) < 1e-9);
    assert(fabs(euclidean_distance(5, 10, 5, 10) - 0.0) < 1e-9);
    assert(fabs(euclidean_distance(-1, -1, 2, 3) - 5.0) < 1e-9);
    assert(fabs(euclidean_distance(1.5, 2.5, 4.5, 6.5) - 5.0) < 1e-9);
    assert(fabs(euclidean_distance(0, 0, 0, 0) - 0.0) < 1e-9);
    log_result("Задача 7", "Все тесты пройдены");

    // ====== Задача 8: Манхэттенское расстояние ======
    log_result("Задача 8", "Начинаем тестирование");
    assert(manhattan_distance(0, 0, 3, 4) == 7);
    assert(manhattan_distance(0, 0, 0, 0) == 0);
    assert(manhattan_distance(5, 10, 5, 10) == 0);
    assert(manhattan_distance(-1, -1, 2, 3) == 7);
    assert(manhattan_distance(-2, 5, 3, -1) == 11);
    assert(manhattan_distance(1, 2, 4, 6) == 7);
    log_result("Задача 8", "Все тесты пройдены");

    // ====== Задача 9: Среднее арифметическое простых чисел ======
    log_result("Задача 9", "Начинаем тестирование");
    assert(fabs(average_primes_in_interval(1, 5) - 3.333333) < 1e-6);
    assert(fabs(average_primes_in_interval(10, 20) - 14.5) < 1e-6);
    assert(fabs(average_primes_in_interval(0, 1) - 0.0) < 1e-9);
    assert(fabs(average_primes_in_interval(2, 2) - 2.0) < 1e-9);
    assert(fabs(average_primes_in_interval(14, 16) - 0.0) < 1e-9);
    log_result("Задача 9", "Все тесты пройдены");

    // ====== Задача 10: Количество кратных чисел ======
    log_result("Задача 10", "Начинаем тестирование");
    assert(count_multiples(1, 10, 2) == 5);
    assert(count_multiples(1, 9, 3) == 3);
    assert(count_multiples(5, 15, 5) == 3);
    assert(count_multiples(0, 0, 1) == 1);
    assert(count_multiples(1, 10, 0) == 0);
    log_result("Задача 10", "Все тесты пройдены");

    // ====== Задача 11: Високосный год ======
    log_result("Задача 11", "Начинаем тестирование");
    assert(is_leap_year(2000) == 1);
    assert(is_leap_year(1900) == 0);
    assert(is_leap_year(2024) == 1);
    assert(is_leap_year(2023) == 0);
    assert(is_leap_year(1600) == 1);
    log_result("Задача 11", "Все тесты пройдены");

    // ====== Задача 12: Сезон по номеру месяца ======
    log_result("Задача 12", "Начинаем тестирование");
    assert(strcmp(season_by_month(1), "зима") == 0);
    assert(strcmp(season_by_month(4), "весна") == 0);
    assert(strcmp(season_by_month(7), "лето") == 0);
    assert(strcmp(season_by_month(10), "осень") == 0);
    assert(strcmp(season_by_month(13), "некорректно") == 0);
    log_result("Задача 12", "Все тесты пройдены");

    // ====== Задача 13: День недели ======
    log_result("Задача 13", "Начинаем тестирование");
    assert(strcmp(day_of_week(1), "понедельник") == 0);
    assert(strcmp(day_of_week(2), "вторник") == 0);
    assert(strcmp(day_of_week(3), "среда") == 0);
    assert(strcmp(day_of_week(6), "суббота") == 0);
    assert(strcmp(day_of_week(9), "некорректно") == 0);
    log_result("Задача 13", "Все тесты пройдены");

    // ====== Задача 14: Подсчёт цифр ======
    log_result("Задача 14", "Начинаем тестирование");
    assert(count_digits(0) == 1);
    assert(count_digits(5) == 1);
    assert(count_digits(12345) == 5);
    assert(count_digits(-999) == 3);
    assert(count_digits(1000000) == 7);
    log_result("Задача 14", "Все тесты пройдены");

    // ====== Задача 15: Реверс числа ======
    log_result("Задача 15", "Начинаем тестирование");
    assert(reverse_number(123) == 321);
    assert(reverse_number(-456) == -654);
    assert(reverse_number(0) == 0);
    assert(reverse_number(10) == 1);
    assert(reverse_number(1001) == 1001);
    log_result("Задача 15", "Все тесты пройдены");

    printf("\n Все тесты успешно пройдены!\n");
    return 0;
}