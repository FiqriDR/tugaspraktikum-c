#include <stdio.h>

int main() {
    int i, num = 1;

    // Mencetak deret angka secara eksponensial dengan pangkat 2
    for (i = 0; i <= 10; i++) {
        printf("%d ", num);
        num *= 2;
    }

    return 0;
}
