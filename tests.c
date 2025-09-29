#include "solutions.c"
#include <assert.h>
#include <stdio.h>

int main() {
    printf("Start functional tests\n");
    assert(is_even(4) == 1);
    assert(is_even(5) == 0);

    assert(max_of_three(1, 2, 3) == 3);

    assert(sign_of_number(5) == 1);
    assert(sign_of_number(0) == 0);
    assert(sign_of_number(-5) == -1);

    assert(absolute_value(-2) == 2);
    assert(absolute_value(0) == 0);
    assert(absolute_value(2) == 2);

    assert(triangle_exists(3, 4, 5) == 1);
    assert(triangle_exists(3, 4, 7) == 0);

    assert(get_grade(91) == "отлично");
    assert(get_grade(75) == "хорошо");
    assert(get_grade(60) == "удовлетворительно");
    assert(get_grade(50) == "неудовлетворительно");

    assert(euclidean_distance(0, 0, 4, 3) == 5);

    assert(manhattan_distance(1, 2, 5, 4) == 6);

    assert(average_primes_in_interval(0, 10) == 4.25);

    assert(count_multiples(1, 10, 2) == 5);

    assert(is_leap_year(400) == 1);
    assert(is_leap_year(2000) == 1);
    assert(is_leap_year(1900) == 0);

    assert(season_by_month(1) == "зима");
    assert(season_by_month(3) == "весна");
    assert(season_by_month(6) == "лето");
    assert(season_by_month(9) == "осень");
    assert(season_by_month(13) == "некорректно");
    
    assert(day_of_week(1) == "понедельник");
    assert(day_of_week(7) == "воскресенье");
    assert(day_of_week(8) == "некорректно");

    assert(count_digits(2020) == 4);
    assert(count_digits(20) == 2);
    assert(count_digits(7) == 1);

    assert(reverse_number(123) == 321);
    assert(reverse_number(1) == 1);
    printf("Finish functional tests\n");

    printf("Start boundary tests\n");
    assert(max_of_three(1, 1, 1) == 1);

    assert(get_grade(90) == "хорошо");
    assert(get_grade(74) == "удовлетворительно");
    assert(get_grade(59) == "неудовлетворительно");

    assert(euclidean_distance(0, 0, 0, 0) == 0);
    
    assert(manhattan_distance(0, 0, 0, 0) == 0);

    assert(average_primes_in_interval(0, 0) == 0);
    
    assert(count_multiples(1, 1, 2) == 0);
    assert(count_multiples(1, 1, 1) == 1);
    assert(count_multiples(1, 1, 0) == 0);

    assert(count_digits(0) == 1);

    assert(reverse_number(100) == 1);
    assert(reverse_number(0) == 0);
    printf("Finish boundary tests\n");
}