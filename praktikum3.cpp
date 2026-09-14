#include <iostream>
using namespace std;

int main() {
    string namaPraktikan;
    int npm, nilaiTugas, nilaiUts, nilaiUas;

    // input data praktikan
    cout << "=== Kalkulator Nilai Praktikum ===" << endl;
    cout << "Masukkan Nama Praktikan: "; cin >> namaPraktikan;
    cout << "Masukkan NPM: "; cin >> npm;
    cout << "Masukkan Nilai Tugas: "; cin >> nilaiTugas;
    cout << "Masukkan Nilai UTS: "; cin >> nilaiUts;
    cout << "Masukkan Nilai UAS: "; cin >> nilaiUas;

    // menghitung nilai akhir + membongkar KKM unik
    int nilaiAkhir = (nilaiTugas * 0.3) + (nilaiUts * 0.3) + nilaiUas * 0.4;
    int KKM = 60 + ((npm * 2) % 15);

    // output hasil
    cout << "---------------------------------" << endl;
    cout << "Nilai akhir kamu adalah: " << nilaiAkhir << endl;
    cout << "KKM Unik kamu adalah: " << KKM << endl;
    cout << "---------------------------------" << endl;

    // memeriksa status kelulusan
    cout << "Status Kelulusan:";
    if (nilaiAkhir >= KKM) {
        cout << "Lulus!" << endl;
    } else {
        cout << "Tidak Lulus!" << endl;
    }
    cout << "Status Cumlaude:";
    if (nilaiAkhir > 85) {
        cout << "Cumlaude!" << endl;
    } else {
        cout << "Tidak Cumlaude!" << endl;
    }
    cout << "=================================" << endl;
    return 0;
}