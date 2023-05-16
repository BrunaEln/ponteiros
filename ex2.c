#include <stdio.h>

main () {
    int a, b;
    int *p1, *p2;

    p1 = &a;
    p2 = &b;

    printf ("Endereco de memoria de A = %p", &a);
    printf ("\nEndereco de memoria de B = %p", &b);

        if (&a > &b) {
            printf ("\n\nVariavel A com o maior endereco de memoria --> %p", p1);
        } else {
            printf ("Variavel B com o maior endereco de memoria --> %p", p2);
        }
}