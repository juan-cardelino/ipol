#include <stdio.h>

int main(){
    
    // 1.- union entre char e int:
    typedef union {
        unsigned char byte;
        int entero;
    } registro;
    registro reg1;
    reg1.entero = 50000;
    reg1.byte = 256;
    printf("reg1.byte: 0x%X\n",reg1.byte);
    printf("reg1.entero: %d\n",reg1.entero);
    // agregado:
    int otroint = 50000;
    printf("reg1.byte: dir: %X tam: %d \n",(unsigned int)&reg1.byte,sizeof(reg1.byte));
    printf("reg1.entero: dir: %X tam: %d \n",(unsigned int)&reg1.entero,sizeof(reg1.entero));
    
    // 2.- tipo_bit:
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
    // agregado:
    tipo_bit unbit;
    printf("unbit: %x %x %x %x %x %x %x %x\n",unbit.bit0,unbit.bit1,unbit.bit2,unbit.bit3,
            unbit.bit4,unbit.bit5,unbit.bit6,unbit.bit7);

    typedef union {
        unsigned char valor;
        tipo_bit bits;
    } otroreg;
    otroreg reg2;
    reg2.valor = 130;
    printf("\nreg2: %x%x%x%x%x%x%x%x\n",reg2.bits.bit0,reg2.bits.bit1,reg2.bits.bit2,
            reg2.bits.bit3,reg2.bits.bit4,reg2.bits.bit5,reg2.bits.bit6,
            reg2.bits.bit7);
    printf("Ver que el struct tipo_bit guarda los bits en orden del menos "
            "significativo al mas significativo.\n");
    
    // 3.- acceso a los primeros 4 bits (primer nibble) y a los segundos 4 bits
    // (segundo nibble).
    typedef struct{
        unsigned char nibble1 : 4;
        unsigned char nibble2 : 4;
    } tipo_nibbles;
    
    // 4.- tamaños de los datos anteriores:
    printf("\n");
    printf("Tamaño de registro: %d.\n",sizeof(reg1));
    printf("Tamaño de tipo_bit: %d.\n",sizeof(unbit));
    tipo_nibbles reg3;
    printf("Tamaño de tipo_nibbles: %d.\n",sizeof(reg3));
    
}