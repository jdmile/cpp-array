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

// Fungsi untuk menghitung jumlah node dalam binary tree
int countNodes(Node* node) {
    if (node == nullptr) {
        return 0;
    }

    return 1 + countNodes(node->left) + countNodes(node->right);
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

    cout << "Jumlah node dalam binary tree adalah: " << countNodes(root) << endl;

    return 0;
}
