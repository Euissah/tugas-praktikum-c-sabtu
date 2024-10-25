#include <stdio.h>

int main() {
    int bilangan;


    printf("Masukkan bilangan bulat positif: ");
    scanf("%d", &bilangan);

    
    if (bilangan < 1) {
        printf("Mohon masukkan bilangan bulat positif.\n");
    } else {
      
        if (bilangan % 2 == 0) {
            printf("GENAP\n");
        } else {
            printf("GANJIL\n");
        }
    }

    return 0;
}