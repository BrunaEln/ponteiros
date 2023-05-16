#include <stdio.h>

main () {
    int a = 5;
    float b = 10;
    char c = 'V';

    int *p1 = NULL;
    float *p2 = NULL;
    char *p3 = NULL;

    p1 = &a;
    p2 = &b;
    p3 = &c;

    printf ("ANTES DA MODIFICACAO:\n");
    printf ("\nValor da variavel A --> %d", a);
    printf ("\nValor da variavel B --> %.2f", b);
    printf ("\nValor da variavel C --> %c", c);

    *p1 = 10;
    *p2 = 20;
    *p3 = 'F';

    printf ("\n\nAPOS A MODIFICACAO:\n");
    printf ("\nValor da variavel A --> %d", a);
    printf ("\nValor da variavel B --> %.2f", b);
    printf ("\nValor da variavel C --> %c", c);
}