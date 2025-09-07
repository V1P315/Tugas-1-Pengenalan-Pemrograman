#include <iostream>
#include <string>
using namespace std;

int main() {
   string nama;
   int usia;
   
   cout << "Masukan Nama Anda:  ";
   getline(cin, nama);
   
   cout << "Masukan Usia Anda:  ";
   cin >> usia;
   
   cout << "Halo!! " << nama << ", usia anda ";
   cout << usia << " tahun." << endl;
   
   return 0;
}
