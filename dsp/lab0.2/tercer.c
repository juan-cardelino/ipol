#include <stdio.h>

void sacarvocales_if(char* p){
    // Función que recibe una cadena de caracteres e imprima la misma omitiendo 
    // las vocales - versión if-else.

    while (*p != '\0') {
        if (*p != 'a' && *p != 'e' && *p != 'i' && *p != 'o' && *p != 'u'){
            printf("%c",*p);
        }
        else printf(" "); // descomentar esta linea para imprimir espacios en
        // el lugar de los caracteres.
        p++;
    }
    printf("\n");
}

void sacarvocales_sw(char* p){
    // Función que recibe una cadena de caracteres e imprima la misma omitiendo 
    // las vocales - versión switch-case.
    
    while (*p != '\0') {
        switch (*p) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                printf(" "); // descomentar esta linea para imprimir espacios en
                // el lugar de los caracteres.
                break;
            default:
                printf("%c",*p);
                break;
        }
        p++;
    }
    printf("\n");
}

int main(){
    
    char frase[] = "Ejemplo de cadena de caracteres";
    char* p = frase;
    
    printf("%s\n",frase);
    
    // version con if-else:
    sacarvocales_if(p);
    
    // version con switch-case:
    sacarvocales_sw(p);
}