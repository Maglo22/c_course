/*
    Characters are represented as integers in primary memory. Each char has a predefined, fixed and standard value (ASCII).
    An ineger variable can be represented as a char as well.
*/

#include<stdio.h>

int main() {
    char ch = 'A'; // define a char
    printf("Character is %c \n", ch); // print char
    printf("ASCII value is %d \n", ch); // print integer ASCII value

    int i = 65;
    printf("Value is %d \n", i);
    printf("Character is %c \n", i); // print char representation
    
    printf("Enter character: ");
    char another;
    // Get char from keyboard
    //scanf("%c", &another);
    another = getchar();
    printf("You typed %c \n", &another);

    return 0;
}