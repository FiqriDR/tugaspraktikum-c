#include <stdio.h>

int main() {
    int A[11]; // Array dengan kapasitas 11 elemen
    int data[] = {12, 15, 7, 10, 5, 2, 17, 25, 9, 20, 35};
    int count = 0;

    printf("Data dalam dokumen:\n");

    // Menyimpan nilai-genap ke dalam array A
    for (int i = 0; i < sizeof(data) / sizeof(data[0]); ++i) {
        if (data[i] % 2 == 0) {
            A[count] = data[i];
            printf("%d ", A[count]); // Mencetak nilai yang disimpan
            count++;
        }
    }

    // Cetak isi array A setelah menyimpan nilai-genap
    printf("\nIsi array A setelah penyimpanan nilai-genap:\n");
    for (int i = 0; i < count; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}

