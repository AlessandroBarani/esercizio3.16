#include <stdio.h>
int main() {
    float a, b, c;
    printf("Inserisci 3 numeri: \n");
    printf("inserisci il primo numero: ");
    scanf("%f", &a);
    printf("Inserisci il secondo numero: ");
    scanf("%f", &b);
    printf("Inserisci il terzo numero: ");
    scanf("%f", &c);
    if(a > b && a > c)
        printf("Il numero maggiore è %.2f", a);  // %.2f per 2 cifre decimali
    else if(b > c && b > a)
        printf("Il numero maggiore è %.2f", b);
    else
        printf("Il numero maggiore è %.2f", c);
    return 0;
}