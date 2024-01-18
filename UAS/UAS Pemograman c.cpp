#include <stdio.h>
#include <unistd.h>

// Array level kekeruhan air
int kekeruhan_air[] = {6, 8, 12, 18, 24, 30, 36, 42, 49};

// Fungsi untuk mengatur kecepatan motor utama berdasarkan level kekeruhan air
void aturKecepatanMotor(int level) {
    // Implementasi logika sistem fuzzy disini
    // ...

    // Contoh implementasi sederhana
    int rpm;
    switch (level) {
        case 12:
            rpm = 800;
            break;
        case 18:
            rpm = 1000;
            break;
        // Tambahkan case sesuai kebutuhan
        // ...
        default:
            rpm = 1000; // Default kecepatan
    }

    printf("Motor utama berputar dengan kecepatan %d rpm.\n", rpm);
}

// Fungsi untuk menjalankan motor pembuka klep selama waktu tertentu
void jalankanMotorPembukaKlep(int waktu) {
    printf("Motor pembuka klep berputar selama %d menit.\n", waktu);
    sleep(waktu * 60); // Konversi menit ke detik
}

int main() {
    printf("Tombol Start ditekan.\n");
    jalankanMotorPembukaKlep(2); // Motor pembuka klep pengisian air aktif selama 2 menit

    printf("Sensor turbidimeter aktif untuk mendeteksi kekeruhan air.\n");

    // Implementasi deteksi kekeruhan air menggunakan sistem fuzzy
    // ...

    // Contoh: Ambil level kekeruhan air pertama dari array
    int levelKekeruhan = kekeruhan_air[0];

    printf("Motor listrik utama berputar sesuai level kekeruhan air %d.\n", levelKekeruhan);

    // Implementasi proses pencucian
    for (int i = 0; i < 2; i++) {
        printf("Motor listrik utama berhenti pada pertengahan waktu.\n");
        sleep(2 * 60); // Jeda 2 menit

        printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit.\n");
        jalankanMotorPembukaKlep(2);

        printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
        aturKecepatanMotor(1000); // Kecepatan 2000 rpm
        sleep(3 * 60); // Jeda 3 menit
    }

    printf("Motor pembuka klep pengisian air aktif selama 2 menit sampai air penuh.\n");
    jalankanMotorPembukaKlep(2);

    printf("Motor listrik utama berputar selama sisa waktu mencuci.\n");

    // Implementasi proses pencucian sisa waktu
    // ...

    printf("Motor pembuka klep pembuangan air kotor aktif selama 2 menit sampai air habis.\n");
    jalankanMotorPembukaKlep(2);

    printf("Motor listrik utama berputar dengan kecepatan 2000 rpm untuk mengeringkan cucian selama 3 menit.\n");
    aturKecepatanMotor(1000); // Kecepatan 2000 rpm
    sleep(3 * 60); // Jeda 3 menit

    return 0;
}
