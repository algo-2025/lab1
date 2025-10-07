#include "solutions.c"
#include <math.h>
#include <stdio.h>
#include <assert.h>
#include <string.h>

// 1
void test_is_even() {
    printf("Testing is_even...\n");
    assert(is_even(4) == 1);    
    assert(is_even(7) == 0);    
    printf("is_even tests passed!\n");
}

// 2
void test_max_of_three() {
    printf("Testing max_of_three...\n");
    assert(max_of_three(1, 2, 3) == 3);
    assert(max_of_three(3, 2, 1) == 3);
    assert(max_of_three(2, 3, 1) == 3);
    assert(max_of_three(5, 5, 5) == 5);
    assert(max_of_three(-1, -2, -3) == -1);
    assert(max_of_three(0, 0, 0) == 0);
    assert(max_of_three(10, 5, 10) == 10);
    printf("All max_of_three tests passed!\n\n");
}

// 3
void test_sign_of_number() {
    printf("Testing sign_of_number...\n");
    assert(sign_of_number(5) == 1);
    assert(sign_of_number(-5) == -1);
    assert(sign_of_number(0) == 0);
    assert(sign_of_number(100) == 1);
    assert(sign_of_number(-100) == -1);
    printf("All sign_of_number tests passed!\n\n");
}

// 4
void test_absolute_value() {
    printf("Testing absolute_value...\n");
    assert(absolute_value(5) == 5);
    assert(absolute_value(-5) == 5);
    assert(absolute_value(0) == 0);
    assert(absolute_value(100) == 100);
    assert(absolute_value(-100) == 100);
    printf("All absolute_value tests passed!\n\n");
}

// 5
void test_triangle_exists() {
    printf("Testing triangle_exists...\n");
    assert(triangle_exists(3, 4, 5) == 1);
    assert(triangle_exists(5, 5, 5) == 1);
    assert(triangle_exists(1, 1, 2) == 0); // ошибка (нет неравенства треугольника)
    assert(triangle_exists(0, 1, 2) == 0); // ошибка (нулевая сторона)
    assert(triangle_exists(-1, 2, 3) == 0); // ошибка (отрицательная сторона)
    assert(triangle_exists(10, 10, 10) == 1);
    assert(triangle_exists(2, 3, 6) == 0);
    printf("All triangle_exists tests passed!\n\n");
}

// 6
void test_get_grade() {
    printf("Testing get_grade...\n");
    assert(strcmp(get_grade(95), "Отлично") == 0);
    assert(strcmp(get_grade(85), "Хорошо") == 0);
    assert(strcmp(get_grade(75), "Хорошо") == 0);
    assert(strcmp(get_grade(65), "Удовлетворительно") == 0);
    assert(strcmp(get_grade(55), "Неудовлетворительно") == 0);
    assert(strcmp(get_grade(0), "Неудовлетворительно") == 0);
    assert(strcmp(get_grade(100), "Отлично") == 0);
    assert(strcmp(get_grade(101), "Некорректно") == 0);
    assert(strcmp(get_grade(-1), "Некорректно") == 0);
    printf("All get_grade tests passed!\n\n");
}

// 7
void test_euclidean_distance() {
    printf("Testing euclidean_distance...\n");
    assert(fabs(euclidean_distance(0, 0, 3, 4) - 5.0) < 0.0001);
    assert(fabs(euclidean_distance(1, 1, 1, 1) - 0.0) < 0.0001);
    assert(fabs(euclidean_distance(0, 0, 1, 1) - sqrt(2)) < 0.0001);
    assert(fabs(euclidean_distance(-1, -1, 2, 3) - 5.0) < 0.0001);
    printf("All euclidean_distance tests passed!\n\n");
}

// 8
void test_manhattan_distance() {
    printf("Testing manhattan_distance...\n");
    assert(manhattan_distance(0, 0, 3, 4) == 7);
    assert(manhattan_distance(1, 1, 1, 1) == 0);
    assert(manhattan_distance(0, 0, 1, 1) == 2);
    assert(manhattan_distance(-1, -1, 2, 3) == 7);
    assert(manhattan_distance(5, 5, 2, 8) == 6);
    printf("All manhattan_distance tests passed!\n\n");
}



// 9
void test_average_primes_in_interval() {
    printf("Testing average_primes_in_interval...\n");
    assert(fabs(average_primes_in_interval(1, 10) - 4.25) < 0.0001); // 2,3,5,7 = 17/4 = 4.25
    assert(fabs(average_primes_in_interval(10, 1) - 4.25) < 0.0001); // проверка обратного порядка
    assert(fabs(average_primes_in_interval(4, 6) - 5.0) < 0.0001); // только 5
    assert(fabs(average_primes_in_interval(8, 10) - 0.0) < 0.0001); // нет простых чисел
    assert(fabs(average_primes_in_interval(2, 2) - 2.0) < 0.0001); // одно простое число
    printf("All average_primes_in_interval tests passed!\n\n");
}

// 10
void test_count_multiples() {
    printf("Testing count_multiples...\n");
    assert(count_multiples(1, 10, 2) == 5); // 2,4,6,8,10
    assert(count_multiples(1, 10, 3) == 3); // 3,6,9
    assert(count_multiples(1, 10, 5) == 2); // 5,10
    assert(count_multiples(1, 10, 11) == 0); // нет кратных
    assert(count_multiples(0, 0, 5) == 1); // 0 кратен любому числу
    assert(count_multiples(1, 10, 0) == 0); // деление на 0
    assert(count_multiples(-10, 10, 5) == 5); // -10,-5,0,5,10
    printf("All count_multiples tests passed!\n\n");
}

// 11
void test_is_leap_year() {
    printf("Testing is_leap_year...\n");
    assert(is_leap_year(2000) == 1); // делится на 400
    assert(is_leap_year(2004) == 1); // длится на 4, но не на 100
    assert(is_leap_year(1900) == 0); // делится на 100, но не на 400
    assert(is_leap_year(2001) == 0); // не делится на 4
    assert(is_leap_year(2020) == 1);
    assert(is_leap_year(2021) == 0);
    assert(is_leap_year(1600) == 1);
    assert(is_leap_year(1700) == 0);
    printf("All is_leap_year tests passed!\n\n");
}

// 12
void test_season_by_month() {
    printf("Testing season_by_month...\n");
    assert(strcmp(season_by_month(1), "Зима") == 0);
    assert(strcmp(season_by_month(12), "Зима") == 0);
    assert(strcmp(season_by_month(3), "Весна") == 0);
    assert(strcmp(season_by_month(5), "Весна") == 0);
    assert(strcmp(season_by_month(6), "Лето") == 0);
    assert(strcmp(season_by_month(8), "Лето") == 0);
    assert(strcmp(season_by_month(9), "Осень") == 0);
    assert(strcmp(season_by_month(11), "Осень") == 0);
    assert(strcmp(season_by_month(0), "Некорректно") == 0);
    assert(strcmp(season_by_month(13), "Некорректно") == 0);
    printf("All season_by_month tests passed!\n\n");
}

// 13
void test_day_of_week() {
    printf("Testing day_of_week...\n");
    assert(strcmp(day_of_week(1), "Понедельник") == 0);
    assert(strcmp(day_of_week(2), "Вторник") == 0);
    assert(strcmp(day_of_week(3), "Среда") == 0);
    assert(strcmp(day_of_week(4), "Четверг") == 0);
    assert(strcmp(day_of_week(5), "Пятница") == 0);
    assert(strcmp(day_of_week(6), "Суббота") == 0);
    assert(strcmp(day_of_week(7), "Воскресенье") == 0);
    assert(strcmp(day_of_week(0), "Некорректно") == 0);
    assert(strcmp(day_of_week(8), "Некорректно") == 0);
    printf("All day_of_week tests passed!\n\n");
}

// 14
void test_count_digits() {
    printf("Testing count_digits...\n");
    assert(count_digits(0) == 1);
    assert(count_digits(5) == 1);
    assert(count_digits(10) == 2);
    assert(count_digits(123) == 3);
    assert(count_digits(9999) == 4);
    assert(count_digits(-123) == 3);
    assert(count_digits(-1) == 1);
    assert(count_digits(1000000) == 7);
    printf("All count_digits tests passed!\n\n");
}

// 15
void test_reverse_number() {
    printf("Testing reverse_number...\n");
    assert(reverse_number(123) == 321);
    assert(reverse_number(-123) == -321);
    assert(reverse_number(0) == 0);
    assert(reverse_number(5) == 5);
    assert(reverse_number(100) == 1);
    assert(reverse_number(120) == 21);
    assert(reverse_number(999) == 999);
    assert(reverse_number(123456789) == 987654321);
    printf("All reverse_number tests passed!\n\n");
}

// запуск
int main() {
    printf("Starting all tests...\n\n");
    
    test_is_even();
    test_max_of_three();
    test_sign_of_number();
    test_absolute_value();
    test_triangle_exists();
    test_get_grade();
    test_euclidean_distance();
    test_manhattan_distance();
    test_average_primes_in_interval();
    test_count_multiples();
    test_is_leap_year();
    test_season_by_month();
    test_day_of_week();
    test_count_digits();
    test_reverse_number();
    
    printf("🎉 All tests passed successfully! 🎉\n");
    return 0;
}