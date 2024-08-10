#include <iostream>
using namespace std;

int main() {
    int arr[5] = {10, 20, 30, 40, 50};

    //mengakses dan menampilkan elemen array
    cout << "Elemen pertama: " << arr[0] << endl;
    cout << "Elemen terakhir: " << arr[4] << endl;

    //modifikasi elemen
    arr[2] = 35;
    cout << "Elemen ketiga setelah dimodifikasi: " << arr[2] << endl;

    //traversal dan menampilkan semua elemen array
    cout << "Semua elemen array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}