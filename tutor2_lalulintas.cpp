#include <iostream>
using namespace std;

int main() {
    char warna;
    cout << "Masukkan Warna(m/k/h): "; cin >> warna;

    switch (warna) {
        case 'm':
            cout << "Berhenti." << endl;
            break;
        case 'k':
            cout << "Siap-siap." << endl;
            break;
        case 'h':
            cout << "Jalan." << endl;
            break;
        default:
            cout << "Warna yang dipilih tidak dikenali." << endl;
            break;
    }
}