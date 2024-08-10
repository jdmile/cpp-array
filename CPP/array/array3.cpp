#include <iostream>
using namespace std;

void findMaxElement(int arr[], int min) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    cout << "Elemen terbesar dalam array adalah: " << max << endl;
}

void findMinElement(int arr[], int min) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    cout << "Elemen terkecil dalam array adalah: " << min << endl;
}

void calculateAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    double average = (double)sum / n;
    cout << "Rata-rata elemen dalam array adalah: " << average << endl;
}

void reverseArray(int arr[], int n) {
    cout << "Array sebelum dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    cout << "\nArray setelah dibalik: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sumArray(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Jumlah semua elemen dalam array adalah: " << sum << endl;
}

void countEvenElements(int arr[], int n) {
    int evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        }
    }
    cout << "Jumlah elemen genap dalam array adalah: " << evenCount << endl;
}

void copyArray(int arr1[], int arr2[], int n) {
    for (int i = 0; i < n; i++) {
        arr2[i] = arr1[i];
    }

    cout << "Isi array kedua adalah: ";
    for (int i = 0; i < n; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }

    cout << "Array setelah diurutkan: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void linearSearch(int arr[], int n, int key) {
    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            cout << "Elemen ditemukan pada indeks: " << i << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Elemen tidak ditemukan dalam array." << endl;
    }
}

void countFrequency(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        int count = 1;
        if (arr[i] != -1) {
            for (int j = i + 1; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                    arr[j] = -1;  // Tandai elemen yang sudah dihitung
                }
            }
            cout << arr[i] << " muncul " << count << " kali." << endl;
        }
    }
}

int main() {
    int arr1[] = {3, 5, 7, 2, 8, -1, 4, 10, 12};
    int arr2[5];
    int arr3[] = {1, 2, 2, 3, 3, 3, 4, 4, 4, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr3) / sizeof(arr3[0]);
    int key = 30;

    // Memanggil fungsi-fungsi di atas
    findMaxElement(arr1, n1);
    findMinElement(arr1, n1);
    calculateAverage(arr1, n1);
    reverseArray(arr1, n1);
    sumArray(arr1, n1);
    countEvenElements(arr1, n1);
    copyArray(arr1, arr2, 5);
    bubbleSort(arr1, n1);
    linearSearch(arr1, n1, key);
    countFrequency(arr3, n2);

    return 0;
}