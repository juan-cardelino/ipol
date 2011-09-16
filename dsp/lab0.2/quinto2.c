#include <stdio.h>

int main() {
    
    // Implementar un tipo de datos registro que permita acceder y modificar los
    // datos de 3 formas: byte, nibble y bit.

     typedef struct {
        unsigned char bit0 : 1;
        unsigned char bit1 : 1;
        unsigned char bit2 : 1;
        unsigned char bit3 : 1;
        unsigned char bit4 : 1;
        unsigned char bit5 : 1;
        unsigned char bit6 : 1;
        unsigned char bit7 : 1;
    } tipo_bit;
    
    typedef struct{
        unsigned char nibble1 : 4;
        unsigned char nibble2 : 4;
    } tipo_nibbles;
    
    typedef union {
        tipo_bit bits;
        tipo_nibbles nibbles;
        unsigned char byte;
    } registro;
}