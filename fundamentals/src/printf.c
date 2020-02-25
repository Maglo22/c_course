/*
    printf returns the number of characters it prints in console.
    [ %d <- format specifier ]
*/

#include<stdio.h>

int main() {
    int i;
    i = printf("Hello");
    printf("%d\n", i);

    printf("%d\n", printf("Hello World")); // inner function (printf) call is done first

    return 0;
}