#include <stdio.h>

int main() {
    int nilai[10];
    
    printf("Masukkan 10 nilai mahasiswa:\n");

    // Input nilai mahasiswa ke dalam array
    for (int i = 0; i < 10; ++i) {
        printf("Nilai mahasiswa ke-%d: ", i + 1);
        scanf("%d", &nilai[i]);
    }

    printf("\nDaftar nilai mahasiswa yang lulus (>= 60):\n");
    for (int i = 0; i < 10; ++i) {
        if (nilai[i] >= 60) {
            printf("Nilai mahasiswa ke-%d: %d\n", i + 1, nilai[i]);
        }
    }

    return 0;
}

