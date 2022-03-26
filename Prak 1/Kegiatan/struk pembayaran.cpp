#include <iostream>

using namespace std;

int main(){
  float harga, diskon,potongan, total;
	string a;
	int b,c;
	int menu;
	cout<<"PILIH MENU"<<endl;
	cout<<"1. Ayam Goreng Rp.17.000."<<endl;
	cout<<"2. Ayam Bakar Rp.21.000"<<endl;
	cout<<"========================"<<endl;
	cout<<"Masukkan Menu : ";
	cin>>a;
  cout <<"===========================";
  cout <<"Menghitung Diskon Barang";
  cout << "==========================\n";
  cout << "Masukkan jumlah harga: ";
  cin >> harga;
  cout << "Masukkan diskon (%): ";
  cin >> diskon;
  cout << "==========================\n";
  potongan = (diskon/100)*harga;
  total = harga-potongan;
  cout << "Harga asli barang: " << harga << endl;
  cout << "Total semua potongan: " << potongan << endl;
  cout << "Total yang harus bayar: " << total << endl;
return 0;
}
