/*
 * Objective : Count length of an array using pointers
 */
#include <stdio.h>
#include<stdlib.h>

int strLen(char *pointer); // function declaration

int main() {
    //test inputs
    char str_1[] = "this is a test string";
    char str_2[] = "";
    char str_3[] = " ";
    //print statements
    printf("Length of str_1: %d\n", strLen(str_1));
    printf("Length of str_2: %d\n", strLen(str_2));
    printf("Length of str_3: %d\n", strLen(str_3));
    return 0;
}

int strLen(char *pointer) { // function definition
    char *address_to_str = pointer; // pointer to str[0]
    while(*address_to_str) // while value @ ptr != \0 -> increment address
        *address_to_str++;
    return address_to_str - pointer; // subtract str[last] - str[first]
}
