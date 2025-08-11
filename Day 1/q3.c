/*Write a C program to extract each byte from a
given number and store them in separate character
variables and print the content of those variables.*/

#include <stdio.h>

int main() {
    unsigned int number;   
    printf("Please enter a decimal number: ");
    scanf("%u", &number);

    // Use a character pointer to access the integer's memory byte by byte.
    unsigned char* ptr = (unsigned char*)&number;

    // Store each byte in a separate character variable.
    unsigned char byte1 = *ptr;
    unsigned char byte2 = *(ptr + 1);
    unsigned char byte3 = *(ptr + 2);
    unsigned char byte4 = *(ptr + 3);

    // Print the original number in decimal and the extracted bytes in hexadecimal.
    printf("\nOriginal number (decimal): %u\n", number);
    printf("Original number (hexadecimal): 0x%X\n", number);
    printf("Byte 1: %X\n", byte1);
    printf("Byte 2: %X\n", byte2);
    printf("Byte 3: %X\n", byte3);
    printf("Byte 4: %X\n", byte4);

    return 0;
}