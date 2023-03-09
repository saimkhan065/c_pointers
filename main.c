/*
 * Objective : Count length of an array using pointers
 */
#include <stdio.h>
#include<stdlib.h>

int strLen(char *pointer);

int main() {
    char str_1[] = "this is a test string";
    char str_2[] = "";
    char str_3[] = " ";
    //print statements
    printf("Length of str_1: %d\n", strLen(str_1));
    printf("Length of str_2: %d\n", strLen(str_2));
    printf("Length of str_3: %d\n", strLen(str_3));
    return 0;
}

int strLen(char *pointer) {
    char *address_to_str = pointer;
    while(*address_to_str)
        *address_to_str++;
    return address_to_str - pointer;
}
