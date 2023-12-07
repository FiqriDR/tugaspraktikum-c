#include <stdio.h>

int main() {
    double uang = 1000000.0; // Jumlah uang awal
    double bunga = 0.02; // Persentase bunga per bulan
    int bulan = 10; // Jumlah bulan

    for (int i = 1; i <= bulan; i++) {
        uang += uang * bunga; // Menghitung jumlah uang setelah bunga ditambahkan
    }

    printf("Jumlah uang setelah %d bulan adalah: Rp. %.2f\n", bulan, uang);

    return 0;
}

