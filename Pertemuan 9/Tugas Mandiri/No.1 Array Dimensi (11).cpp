#include <stdio.h>

int main() {
    int A[11] = {12, 17, 10, 5, 15, 25, 11, 7, 25, 16, 19};
    int N, i, ada = 0;

    printf("Masukkan bilangan integer = ");
    scanf("%d", &N);

    printf("Array: ");
    for (i = 0; i < 11; i++) {
        printf("%d ", A[i]);
        if (A[i] == N) {
            ada = 1;
            printf("\nADA\nLokasi bilangan yang sama: %d", i);
        }
    }

    if (!ada)
        printf("\nTIDAK ADA");

    return 0;
}

