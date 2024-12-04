#include <iostream>
using namespace std;

int main() {
    string b[5] = { "Sabun", "Handuk", "Shampo", "Pasta Gigi", "Sikat Gigi" };
    int h[5] = { 5000, 10000, 15000, 20000, 25000 };
    int s[5] = { 10, 20, 30, 40, 50 };
    int j [5] = {0};
    int total = 0;

    cout << "Daftar Stock Barang: " << endl;
    for (int i = 0; i < 5; i++) {
        cout << i + 1 << ". " << b[i] << " Rp." << h[i] << " Stock Tersedia: " << s[i] << endl;
    }

    for (int i = 0; i < 5; i++) {
        int jum;
        do{
            cout << "Masukkan jumlah barang " << b[i] << ": ";
            cin >> jum;

            if (jum > s[i]) {
                cout << "Stock " << b[i] << "Tidak ada " << endl;
            } else {
                j[i] = jum;
                s[i] -= jum;
                total += jum * h[i];
                break;
            }
        } while (true);
    }
    cout << "Total harga belanja: Rp." << total << endl;

}