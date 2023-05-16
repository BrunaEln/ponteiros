#include <stdio.h>

main () {
    int a, b;
    int *p1, *p2;

    printf ("Digite um numero inteiro: ");
    scanf ("%d", &a);
    printf ("Digite outro numero: ");
    scanf ("%d", &b);

    p1 = &a;
    p2 = &b;

    printf ("\n\nEndereco do primeiro numero --> %p", &a);
    printf ("\nEndereco do segundo numero --> %p", &b);

        if (&a >  &b) {
            printf ("\n\nO numero %d possui o maior endereco --> %p", a, p1);
        } else {
            printf ("\n\nO numero %d possui o maior endereco --> %p\n", b, p2);
        }
}