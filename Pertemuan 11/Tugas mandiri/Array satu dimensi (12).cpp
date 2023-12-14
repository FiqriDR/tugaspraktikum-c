#include <stdio.h>

int main() {
    int A[12] = {60, 80, 55, 90, 75, 40, 50, 85, 70, 65, 45, 55};
    int B[12], C[12];
    int total = 0, rata, countB = 0, countC = 0;

    // Menghitung total nilai pada array A
    for (int i = 0; i < 12; i++) {
        total += A[i];
    }

    // Menghitung rata-rata
    rata = total / 12;

    // Memindahkan nilai-nilai dari array A ke array B dan C sesuai kriteria
    for (int i = 0; i < 12; i++) {
        if (A[i] > rata) {
            B[countB] = A[i];
            countB++;
        } else {
            C[countC] = A[i];
            countC++;
        }
    }

    // Menampilkan isi array A
    printf("Isi Array A:\n");
    for (int i = 0; i < 12; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    // Menampilkan isi array B
    printf("Isi Array B:\n");
    for (int i = 0; i < countB; i++) {
        printf("%d ", B[i]);
    }
    printf("\n");

    // Menampilkan isi array C
    printf("Isi Array C:\n");
    for (int i = 0; i < countC; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

