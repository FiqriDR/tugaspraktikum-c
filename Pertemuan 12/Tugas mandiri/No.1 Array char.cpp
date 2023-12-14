#include <stdio.h>

int main() {
    char A[] = {'J', 'A', 'K', 'A', 'R', 'T', 'A', '\0'};
    int flag = 0;

    for (int i = 0; A[i] != '\0'; i++) {
        for (int j = i + 1; A[j] != '\0'; j++) {
            if (A[i] == A[j]) {
                printf("ADA\nHuruf yang sama: %c\n", A[i]);
                flag = 1;
                break;
            }
        }
        if (flag == 1) {
            break;
        }
    }

    if (flag == 0) {
        printf("TIDAK ADA\n");
    }

    return 0;
}

