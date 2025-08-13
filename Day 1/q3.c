/*Write a C program to extract each byte from a
given number and store them in separate character
variables and print the content of those variables.*/

#include <stdio.h>
<<<<<<< HEAD
#include <stdint.h>

int main()
{
  uint32_t number;
  unsigned char bytes[4];

  printf("Enter a number: ");
  scanf("%u", &number);

  bytes[0] = (number & 0xFF);
  bytes[1] = (number >> 8) & 0xFF;
  bytes[2] = (number >> 16) & 0xFF;
  bytes[3] = (number >> 24) & 0xFF;

  // Print the content of each byte
  printf("Bytes extracted from the number:\n");
  for (int i = 0; i < 4; i++)
  {
    printf("Byte %d: %d\n", i + 1, bytes[i]);
  }

  return 0;
=======

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
>>>>>>> 3a3f7ed7287819910f7fac579c6981da5b0bc3f5
}