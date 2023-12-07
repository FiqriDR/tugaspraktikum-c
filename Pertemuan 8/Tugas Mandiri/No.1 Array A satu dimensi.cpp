#include <stdio.h>

int main() {
    int A[11] = {0}; // Array A dengan 11 elemen, diinisialisasi dengan 0
    int input, index = 0;

    printf("Masukkan data (akhiri dengan angka 999):\n");

    // Input data satu persatu sampai bertemu angka 999 atau array penuh
    while (1) {
        scanf("%d", &input);

        if (input == 999 || index >= 11) {
            break;
        }

        // a. A 12 7 5 17 9 35 (nilai lebih besar dari 9)
        if (input > 9) {
            A[index++] = input;
        }
    }
    
    // b. A 12 15 10 17 25 20 35 (nilai lebih besar dari 9)
// Disimpan sesuai urutan letak data dalam dokumen
int index_b = 0;
int B[11] = {0};
while (1) {
    scanf("%d", &input);

    if (input == 999 || index_b >= 11) {
        break;
    }

    if (input > 9) {
        B[index_b++] = input;
    }
}

printf("Isi array B: ");
for (int i = 0; i < index_b; ++i) {
    printf("%d ", B[i]);
}
printf("\n");

// Anda dapat menambahkan logika serupa untuk pola c, d, dan e


    printf("Isi array A: ");
    for (int i = 0; i < index; ++i) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    return 0;
}


