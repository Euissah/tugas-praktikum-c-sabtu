#include <stdio.h>

int main() {
    
    double saldo = 1000000.0;
    double bunga_perbulan = 0.02;
    int bulan = 10;
    
    for (int i = 1; i <= bulan; i++) {
        saldo += saldo * bunga_perbulan;
    }
    
    
    printf("Jumlah uang setelah %d bulan adalah Rp. %.2f\n", bulan, saldo);
    
    return 0;
}