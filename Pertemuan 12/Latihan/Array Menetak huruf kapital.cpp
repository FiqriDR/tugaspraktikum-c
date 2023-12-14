#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char A[6];
    char B[8];

    // Input isi array A
    cout << "Masukkan isi array A (6 huruf kapital tanpa spasi): ";
    cin >> A;

    // Input isi array B
    cout << "Masukkan isi array B (8 huruf kapital tanpa spasi): ";
    cin >> B;

    bool found = false;

    // Memeriksa kesamaan isi array A dan B
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 8; j++) {
            if (A[i] == B[j]) {
                found = true;
                cout << "ADA, Huruf yang sama: " << A[i] << endl;
                break;
            }
        }
        if (found) {
            break;
        }
    }

    if (!found) {
        cout << "TIDAK ADA" << endl;
    }

    return 0;
}

