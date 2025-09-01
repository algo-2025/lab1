#include <assert.h>
#include <math.h>
#include <stdio.h>
#include "lab1.h"
#include <string.h>

int main() {
    // Задача 1
    int mn, mx;
    min_max(3, 7, &mn, &mx);
    assert(mn == 3 && mx == 7);

    // Задача 2
    assert(is_even(4) == 1);
    assert(is_even(5) == 0);

    // Задача 3
    assert(sign(-5) == -1);
    assert(sign(0) == 0);
    assert(sign(7) == 1);

    // Задача 4
    assert(absolute(-7) == 7);

    // Задача 5
    assert(max_of_three(5, 8, 2) == 8);

    // Задача 6
    assert(grade(95) && strcmp(grade(95), "отлично") == 0);
    assert(grade(72) && strcmp(grade(72), "хорошо") == 0);

    // Задача 7
    assert(fabs(distance(0, 0, 3, 4) - 5.0) < 1e-6);

    // Задача 8
    assert(is_prime(2) == 1);
    assert(is_prime(15) == 0);

    // Задача 9
    assert(count_multiples(1, 10, 2) == 5);

    printf("Все тесты пройдены!\n");
    return 0;
}
