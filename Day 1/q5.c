/*Write a C program to check whether the Host
machine is in Little Endian or Big Endian. Enter a
number, print the content of each byte location and
Convert the Endianness of the same i.e. Little to Big
Endian and vice-versa*/

#include <stdio.h>

int main()
{
    unsigned int num;
    unsigned char *bytePtr;

    printf("Enter a number: ");
    scanf("%u", &num);

    bytePtr = (unsigned char *)&num;

    // Detect endianness based on the first byte
    if (bytePtr[0] == (num & 0xFF))
        printf("Host machine is Little Endian.\n");
    else
        printf("Host machine is Big Endian.\n");

    printf("Byte contents:\n");
    for (int i = 0; i < sizeof(num); i++)
        printf("Byte %d: %u\n", i, bytePtr[i]);

    printf("Converted number (Endianness switched):\n");
    for (int i = 0; i < sizeof(num); i++)
        printf("Byte %d: %u\n", i, bytePtr[sizeof(num) - 1 - i]);

    return 0;
}
