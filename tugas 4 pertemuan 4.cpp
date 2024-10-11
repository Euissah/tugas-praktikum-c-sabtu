#include <stdio.h>

int main() {
    int angka;


    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &angka);

  
    if (angka < 0) {
        printf("Silakan masukkan bilangan bulat positif.\n");
    } else if (angka % 2 == 0) {
        printf("GENAP\n");
    } else {
        printf("GANJIL\n");
    }

    return 0;
}