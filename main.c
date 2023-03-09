/*
 * Objective : Count length of an array using pointers
 */
#include <stdio.h>
#include<stdlib.h>

int strLen(char *pointer); // function declaration
int square_number(int *number);

int main() {
    //test inputs
    char str_1[] = "this is a test string";
    char str_2[] = "";
    char str_3[] = " ";
    int number_1 = 10;
    int number_2 = 0;
    int number_3 = 52;
    //print statements
    printf("Length of str_1: %d\n", strLen(str_1)); 
    printf("Length of str_2: %d\n", strLen(str_2));
    printf("Length of str_3: %d\n", strLen(str_3));
    printf("square of number_1: %d\n", square_number(&number_1));
    printf("square of number_2: %d\n", square_number(&number_2));
    printf("square of number_3: %d\n", square_number(&number_3));
    return 0;
}

int strLen(char *pointer) { // function definition
    char *address_to_str = pointer; // pointer to str[0]
    while(*address_to_str) // while value @ ptr != \0 -> increment address
        *address_to_str++;
    return address_to_str - pointer; // subtract str[last] - str[first]
}

int square_number(int *const number){
    return (*number) * (*number);
}
