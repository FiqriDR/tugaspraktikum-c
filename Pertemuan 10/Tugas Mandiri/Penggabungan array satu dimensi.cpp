#include <stdio.h>

int main() {
    int A[5] = {12, 8, 17, 5, 15};
    int B[7] = {5, 11, 7, 25, 9, 12, 14};
    int C[12];
    int idxC = 0;

    // Salin nilai yang lebih besar dari 10 dari Array A ke Array C
    for (int i = 0; i < 5; ++i) {
        if (A[i] > 10) {
            C[idxC] = A[i];
            idxC++;
        }
    }

    // Salin nilai yang lebih besar dari 10 dari Array B ke Array C
    for (int i = 0; i < 7; ++i) {
        if (B[i] > 10) {
            C[idxC] = B[i];
            idxC++;
        }
    }

    // Menampilkan isi dari Array C
    printf("Array C:\n");
    for (int i = 0; i < idxC; ++i) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}

