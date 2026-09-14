#include <iostream>
#include <string>
using namespace std;

int main() {
    string nama, nama_temanlk, nama_temanpr;
    float npm, npm_temanlk, npm_temanpr;
    float npm_Target1, npm_Target2;

    cout << "========== Absensi ==========" << endl;
    cout << "Nama Panggilan Saya: "; cin >> nama;
    cout << "3 NPM Terakhir Saya: "; cin >> npm;
    cout << "Nama Panggilan Teman Laki-Laki: "; cin >> nama_temanlk;
    cout << "3 NPM Teman Laki-Laki: "; cin >> npm_temanlk;
    cout << "Nama Panggilan Teman Perempuan: "; cin >> nama_temanpr;
    cout << "3 NPM Terakhir Teman Perempuan: "; cin >> npm_temanpr;
    cout << endl;
    
    npm_Target1 = npm_temanlk + (int(npm * 5) % 4);
    npm_Target2 = npm_temanpr + (int(npm * 5) % 4);

    cout << "========== NPM yang Dicari ==========" << endl;
    cout << "NPM Orang Lain 1: " << npm_Target1 << endl;
    cout << "NPM Orang Lain 2: " << npm_Target2 << endl;

    return 0;
}