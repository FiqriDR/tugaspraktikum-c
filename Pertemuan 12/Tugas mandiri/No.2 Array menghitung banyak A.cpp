#include <stdio.h>

int main() {
    char A[11] = "JOGJAKARTA";
    int count[26] = {0}; // Array untuk menghitung jumlah kemunculan setiap huruf

    // Menghitung jumlah kemunculan setiap huruf dalam array A
    for (int i = 0; A[i] != '\0'; i++) {
        if (A[i] >= 'A' && A[i] <= 'Z') {
            count[A[i] - 'A']++;
        }
    }

    // Mencari huruf yang paling banyak muncul
    int maxCount = 0;
    char mostFrequentChar;
    for (int i = 0; i < 26; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            mostFrequentChar = 'A' + i;
        }
    }

    // Menampilkan jumlah huruf yang paling banyak muncul beserta hurufnya
    printf("Huruf yang paling banyak muncul adalah '%c' sebanyak %d kali.\n", mostFrequentChar, maxCount);

    return 0;
}

