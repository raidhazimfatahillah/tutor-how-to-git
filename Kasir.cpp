#include <iostream>
using namespace std;

// deklarasi variable
int totalBelanja, potonganHarga, totalBayar;

int main () {
    // input total belanja dari user
    cout << "=== Kalkulator Kasir Toko Buku ===" << endl;
    cout << "Masukan total belanja (Rp): "; cin >> totalBelanja;

    // proses logika kasir untuk menghitung diskon berdasarkan total belanja
    if (totalBelanja >= 100000 && totalBelanja < 299999) {
        totalBayar = totalBelanja * 90 / 100;
        potonganHarga = totalBelanja * 10 / 100;
        cout << "\n=== Ringkasan Pembayaran ===" << endl;
        cout << "Diskon (10%)   : Rp " << potonganHarga << endl;
        cout << "Total Bayar    : Rp " << totalBayar << endl;
    } else if (totalBelanja >= 300000) {
        totalBayar = totalBelanja * 80 / 100;
        potonganHarga = totalBelanja * 20 / 100;
        cout << "\n=== Ringkasan Pembayaran ===" << endl;
        cout << "Diskon (20%)   : Rp " << potonganHarga << endl;
        cout << "Total Bayar    : Rp " << totalBayar << endl;
    } else {
        totalBayar = totalBelanja;
        potonganHarga = 0;
        cout << "\n=== Ringkasan Pembayaran ===" << endl;
        cout << "Diskon (0%)   : Rp " << potonganHarga << endl;
        cout << "Total Bayar    : Rp " << totalBayar << endl;
    }
    return 0;
}