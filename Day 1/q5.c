/*Write a C program to check whether the Host
machine is in Little Endian or Big Endian. Enter a
number, print the content of each byte location and
Convert the Endianness of the same i.e. Little to Big
Endian and vice-versa*/

#include <stdio.h>
#include <stdint.h>

int main() {
    unsigned int number;
    printf("Please enter a decimal number: ");
    scanf("%u", &number);

    // Use a character pointer to access the integer's memory byte by byte.
    unsigned char* ptr = (unsigned char*)&number;

    // Store each byte in a separate character variable (from little endian layout)
    unsigned char byte1 = *ptr;         // Least significant byte (LSB)
    unsigned char byte2 = *(ptr + 1);
    unsigned char byte3 = *(ptr + 2);
    unsigned char byte4 = *(ptr + 3);   // Most significant byte (MSB)

    // Print original number
    printf("\nOriginal number (decimal): %u\n", number);
    printf("Original number (hexadecimal): 0x%X\n", number);

    // Print bytes in little endian order
    printf("\nLittle Endian Byte Order (Reversed View):\n");
    printf("Byte 1 (LSB): %X\n", byte1);
    printf("Byte 2     : %X\n", byte2);
    printf("Byte 3     : %X\n", byte3);
    printf("Byte 4 (MSB): %X\n", byte4);

    // Print bytes in big endian order 
    printf("\nBig Endian Byte Order:\n");
    printf("Byte 1 (MSB): %X\n", byte4);
    printf("Byte 2     : %X\n", byte3);
    printf("Byte 3     : %X\n", byte2);
    printf("Byte 4 (LSB): %X\n", byte1);

    // Manually swap bytes to convert endianness
    uint32_t convertedNumber = 
        ((uint32_t)byte1 << 24) | 
        ((uint32_t)byte2 << 16) | 
        ((uint32_t)byte3 << 8)  | 
        ((uint32_t)byte4);

    // Print the converted number
    printf("\nConverted number (hex): 0x%X\n", convertedNumber);
    printf("Converted number (decimal): %u\n", convertedNumber);

    // Check system endianness based on comparison
    if (number == convertedNumber) {
        printf("\nSystem Endianness: Big Endian (no change after conversion)\n");
    } else {
        printf("\nSystem Endianness: Little Endian (conversion successful)\n");
    }

    return 0;
}
