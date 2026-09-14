#include <iostream>
using namespace std;

int main() {
    string nama_toko = "Toko Buah Segar";
    string nama_kasir = "Andi";
    char kode = 'A';
    int hargaApel = 15500;
    int hargaJeruk = 12750;
    float minimumBelanja = 0.5;
    float pajak = 11.5;
    bool buka = true;

    string nama_pembeli;
    float beratApel, beratJeruk;

    cout << "Nama: "; cin >> nama_pembeli;
    cout << "Berat Apel: "; cin >> beratApel;
    cout << "Berat Jeruk: "; cin >> beratJeruk;

    cout << "Nama Toko: " << nama_toko << endl;
    cout << "Nama Kasir: " << nama_kasir << endl;

    cout << "Input Transaksi" << endl;
    cout << "Nama Pembeli: " << nama_pembeli << endl;
    cout << "Berat Apel (kg): " << beratApel << endl;
    cout << "Berat Jeruk (kg): " << beratJeruk << endl;

    float subApel = beratApel * hargaApel;
    float subJeruk = beratJeruk * hargaJeruk;
    float total = subApel + subJeruk;
    float pascaPajak = total * pajak;
    float grandTotal = pascaPajak + pajak;
    cout << "Perhitungan" << endl;
    cout << "Subtotal Apel: " << subApel << endl;
    cout << "Subtotal Jeruk: " << subJeruk << endl;
    cout << "Total Belanja: " << total << endl;
    cout << "Pajak (11.5%): " << pascaPajak << endl;
    cout << "Grand Total: " << grandTotal << endl;
    return 0;

}