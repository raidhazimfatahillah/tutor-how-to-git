#include <iostream>
using namespace std;

int main() {
    float radius, tinggi, luasAlas, Volume;

    cout << "Masukkan Radius: "; cin >> radius;
    cout << "Masukkan Tinggi: "; cin >> tinggi;

    luasAlas = 3.14 * radius * radius;
    Volume = luasAlas * tinggi / 3;

    cout << "Luas Alas: " << luasAlas << endl;
    cout << "Volume: " << Volume << endl;

    return 0;
}