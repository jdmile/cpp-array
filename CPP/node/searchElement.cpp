#include <iostream>
using namespace std;

// Definisi struktur node dari binary tree
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

// Fungsi untuk mencari elemen dalam binary tree
bool search(Node* node, int key) {
    if (node == nullptr) {
        return false;
    }

    if (node->data == key) {
        return true;
    }

    // Cari di subtree kiri atau kanan
    return search(node->left, key) || search(node->right, key);
}

int main() {
    // Membuat binary tree secara manual
    Node* root = new Node(10);
    root->left = new Node(20);
    root->right = new Node(30);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right->left = new Node(60);
    root->right->right = new Node(70);

    int key = 50;
    if (search(root, key)) {
        cout << "Elemen " << key << " ditemukan dalam binary tree." << endl;
    } else {
        cout << "Elemen " << key << " tidak ditemukan dalam binary tree." << endl;
    }

    return 0;
}
