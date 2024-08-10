#include <iostream>
using namespace std;

class Queue {
private:
    int front, rear, size;
    int* queue;
    int capacity;

public:
    // Konstruktor
    Queue(int c) {
        front = rear = size = 0; // Inisialisasi size dengan 0
        capacity = c;
        queue = new int[capacity];
    }

    // Destruktor
    ~Queue() {
        delete[] queue;
    }

    // Menambahkan elemen ke rear
    void enqueue(int data) {
        if (size == capacity) {
            cout << "Queue penuh, tidak bisa menambahkan elemen." << endl;
            return;
        } else {
            queue[rear] = data;
            rear = (rear + 1) % capacity;
            size++;
            cout << "Elemen " << data << " ditambahkan ke queue." << endl;
        }
    }

    // Menghapus elemen dari front
    int dequeue() {
        if (size == 0) {
            cout << "Queue kosong, tidak bisa menghapus elemen." << endl;
            return -1;
        } else {
            int data = queue[front];
            front = (front + 1) % capacity;
            size--;
            cout << "Elemen " << data << " dihapus dari queue." << endl;
            return data;
        }
    }

    // Menampilkan elemen di front
    int peek() {
        if (size == 0) {
            cout << "Queue kosong." << endl;
            return -1;
        } else {
            return queue[front];
        }
    }

    // Memeriksa apakah queue kosong
    bool isEmpty() {
        return (size == 0);
    }

    // Memeriksa apakah queue penuh
    bool isFull() {
        return (size == capacity);
    }

    // Menampilkan seluruh isi queue
    void display() {
        if (isEmpty()) {
            cout << "Queue kosong." << endl;
            return;
        }

        cout << "Isi queue: ";
        for (int i = 0; i < size; i++) {
            cout << queue[(front + i) % capacity] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q(5);  // Membuat queue dengan kapasitas 5

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.display();

    q.dequeue();
    q.display();

    q.enqueue(50);
    q.enqueue(60);  // Queue penuh

    q.display();

    return 0;
}
