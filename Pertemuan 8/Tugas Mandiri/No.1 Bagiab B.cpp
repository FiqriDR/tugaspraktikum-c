// b. A 12 15 10 17 25 20 35 (nilai lebih besar dari 9)
// Disimpan sesuai urutan letak data dalam dokumen
int index_b = 0;
int B[11] = {0};

 printf("Masukkan data (akhiri dengan angka 999):\n");
 
 
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



