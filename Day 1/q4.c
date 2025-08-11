/*Write a C Program to enter a number and store the number across the following structure and print the content   of   each   member   of   the   structure.Then aggregate each member of the structure to form the original number and print the same.

struct pkt{
char ch1;
char ch2[2];
char ch3;
};*/

#include <stdio.h>
#include <stdint.h>

struct pkt {
    char ch1; //1 byte
    char ch2[2]; //2 bytes
    char ch3;
};

int main() {
    uint32_t number;
    struct pkt *p;

    printf("Enter a number: ");
    scanf("%u", &number);

    // Point struct to the address of number
    p = (struct pkt *)&number;

    // Print each member of the struct
    printf("\nStructure members:\n");
    printf("ch1: %X\n", p->ch1 & 0xFF);
    printf("ch2[0]: %X\n", p->ch2[0] & 0xFF);
    printf("ch2[1]: %X\n", p->ch2[1] & 0xFF);
    printf("ch3: %X\n", p->ch3 & 0xFF);

    // Reconstruct number using struct
    uint32_t reconstructed = 
    ((uint8_t)p->ch3 << 24) | ((uint8_t)p->ch2[1] << 16) | ((uint8_t)p->ch2[0] << 8) | ((uint8_t)p->ch1); //bitwise left shift to place at correct position and OR to merge
  
    printf("Reconstructed number(decimal): %u\n", reconstructed);
    printf("Reconstructed number(hex): 0x%X\n", reconstructed);

    return 0;
}
