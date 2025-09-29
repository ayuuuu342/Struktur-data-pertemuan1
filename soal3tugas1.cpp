//Nama: Ayu Setyaning Tyas
//NIM: 103112430119
//Kelas: IF12-06
#include <iostream>
using namespace std;


int main() {
    int n;
    cout << "Masukkan angka: ";
    cin >> n;


     if (n < 1) {
        cout << "Angka harus lebih dari 0." << endl;
        return 1;
    }
    for (int i = n; i >= 1; i--) {
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        cout << "* ";


        for (int k = 1; k <= i; k++) {
            cout << k << "  ";
        }


        cout << endl;
    }
    cout << "*" << endl;
    return 0;
}
