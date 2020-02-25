/*
    In operations between variables, the result type is going to come from the variable with
    the higher presedence.
*/

#include<stdio.h>

int main() {
    int a = 5, b = 2;
    float r;
    r = (float)a / b; // explicit casting to get a result in type float
    printf("r = %f\n", r);

    return 0;
}