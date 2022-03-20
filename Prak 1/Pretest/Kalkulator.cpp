#include <iostream>
using namespace std;

int main() {

    float a,b;
    int kode;

    menu :
    cout << "Kalkulator Sederhana C++ \n";
    cout << "Pilihan Menu : \n";
    cout << "1.Penjumlahan (+)\n";
    cout << "2.Pengurangan (-)\n";
    cout << "3.Perkalian (*)\n";
    cout << "4.Pembagian (/)\n\n";
    cout << "Silahkan masukkan kode menu : ";cin >> kode;
    cout << endl;
    cout << "Masukkan angka pertama : ";cin >> a;
    cout << "Masukkan angka kedua   : ";cin >> b;
        if (kode == 1){
            cout << "\nHasil penjumlahan dari "<<a<<" + "<<b<<" adalah : "<<a+b<<endl;
        }
        else if (kode == 2){
            cout << "\nHasil pengurangan dari "<<a<<" - "<<b<<" adalah : "<<a-b<<endl;
        }
        else if (kode == 3){
            cout << "\nHasil perkalian dari "<<a<<" * "<<b<<" adalah : "<<a*b<<endl;
        }
        else if (kode == 4){
            cout << "\nHasil pembagian dari "<<a<<" / "<<b<<" adalah : "<<a/b<<endl;
        }
    
    return 0;
}