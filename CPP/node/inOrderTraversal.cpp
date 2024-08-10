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

// Fungsi untuk melakukan in-order traversal
void inOrderTraversal(Node* node) {
    if (node == nullptr) {
        return;
    }

    // Kunjungi subtree kiri
    inOrderTraversal(node->left);

    // Cetak data dari node saat ini
    cout << node->data << " ";

    // Kunjungi subtree kanan
    inOrderTraversal(node->right);
}

int main() {
    // Membuat binary tree secara manual
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    cout << "In-order traversal dari binary tree adalah: ";
    inOrderTraversal(root);
    cout << endl;

    return 0;
}
