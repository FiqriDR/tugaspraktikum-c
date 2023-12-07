#include <stdio.h>

int main() {
    char A[10] = {'S', 'T', 'T', 'M', 'A', 'N', 'D', 'A', 'L', 'A'};
    char C;
    int i, ada = 0, count = 0;

    printf("Masukkan karakter = ");
    scanf(" %c", &C);

    printf("Array: ");
    for (i = 0; i < 10; i++) {
        printf("%c ", A[i]);
        if (A[i] == C) {
            ada = 1;
            count++;
        }
    }

    if (ada)
        printf("\nADA\nJumlah karakter yang sama: %d", count);
    else
        printf("\nTIDAK ADA");

    return 0;
}

