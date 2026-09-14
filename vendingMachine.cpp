#include <iostream>
using namespace std;

int main() {
    // deklarasi variable
    int airMineral = 4000, tehBotol = 6000, kopiSusu = 10000, kodeMinuman, uangDibayarkan, kembalian, uangKurang;

    // menu minuman vending machine dan input kode minuman beserta besaran uang yang dibayarkan
    cout << "=== VENDING MACHINE ===" << endl;
    cout << "Pilihan Minuman: " << endl;
    cout << "1. Air Mineral - Rp " << airMineral << endl;
    cout << "2. Teh Botol - Rp " << tehBotol << endl;
    cout << "3. Kopi Susu - Rp " << kopiSusu << endl;
    cout << "Pilih kode minuman (1-3): "; cin >> kodeMinuman;
    cout << "Masukan uang Anda (RP): "; cin >> uangDibayarkan;

    
    // proses logika vending machine menggunakan switch case untuk menentukan minuman yang dipilih dan menghitung kembalian atau kekurangan uang
    switch (kodeMinuman) {
        case 1:
            if (uangDibayarkan >= airMineral) {
                kembalian = uangDibayarkan - airMineral;
                cout << "\nTerima kasih telah membeli Air Mineral." << endl;
                cout << "Kembalian Anda: Rp " << kembalian << endl;
            } else {
                uangKurang = airMineral - uangDibayarkan;
                cout << "\nTransaksi gagal. Uang Anda kurang Rp " << uangKurang << endl;
            }
            break;
        case 2:
            if (uangDibayarkan >= tehBotol) {
                kembalian = uangDibayarkan - tehBotol;
                cout << "\nTerima kasih telah membeli Teh Botol." << endl;
                cout << "Kembalian Anda: Rp " << kembalian << endl;
            } else {
                uangKurang = tehBotol - uangDibayarkan;
                cout << "\nTransaksi gagal. Uang Anda kurang Rp " << uangKurang << endl;
            }
            break;
        case 3:
            if (uangDibayarkan >= kopiSusu) {
                kembalian = uangDibayarkan - kopiSusu;
                cout << "\nTerima kasih telah membeli Kopi Susu." << endl;
                cout << "Kembalian Anda: Rp " << kembalian << endl;
            } else {
                uangKurang = kopiSusu - uangDibayarkan;
                cout << "\nTransaksi gagal. Uang Anda kurang Rp " << uangKurang << endl;
            }
            break;
        default:
            cout << "\nKode minuman tidak valid." << endl;
    }
    return 0;
}