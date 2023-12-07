#include <stdio.h>

int main() {
    int X[4] = {12, 2, 7, 10};
    int Y[6] = {15, 4, 16, 20, 25, 30};
    int Z[10];
    int index_Z = 0;

    // Menambahkan nilai yang lebih kecil dari 10 dari array X ke array Z
    for (int i = 0; i < 4; ++i) {
        if (X[i] < 10) {
            Z[index_Z] = X[i];
            index_Z++;
        }
    }

    // Menambahkan nilai dari lokasi ganjil dari array Y ke array Z
    for (int i = 0; i < 6; i += 2) {
        Z[index_Z] = Y[i];
        index_Z++;
    }

    // Menampilkan isi array Z
    printf("Isi array Z setelah penggabungan:\n");
    for (int i = 0; i < index_Z; ++i) {
        printf("%d ", Z[i]);
    }
    printf("\n");

    return 0;
}

