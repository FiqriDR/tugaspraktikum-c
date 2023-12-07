#include <stdio.h>

int main() {
    int speed = 2; // Kecepatan sepeda dalam meter/detik
    int time = 100; // Waktu dalam detik

    int distance = speed * time; // Menghitung jarak yang ditempuh

    printf("Jarak yang ditempuh setelah %d detik adalah %d meter.\n", time, distance);

    return 0;
}
