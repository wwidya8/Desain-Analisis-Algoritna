//	TUGAS LATIHAN HAL.65 MODUL
#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* left;
        Node* right;
        
        Node (int value) {
            data = value;
            left = NULL;
            right = NULL;
        }
};

class Tree {
    public:
        Node* root;
        
        Tree () {root = NULL;}
        
        void insert(int value) {
            root = insert(root, value);
        }
        
        Node* insert (Node* node, int value) {
            if (node == NULL) {
                node = new Node (value);
            } else if (value <= node -> data) {
                node -> left = insert (node -> left, value);
            } else {
                node -> right = insert (node -> right, value);
            }
            return node;
        }
        
        void preorder () { preorder(root); }
        
        void preorder (Node* node) {
            if (node == NULL) return;
            cout << node -> data << " ";
            preorder(node -> left);
            preorder(node -> right);
        }
        
        void inorder () { inorder(root); }
        
        void inorder (Node* node) {
            if (node == NULL) return;
            inorder (node -> left);
            cout<< node -> data <<" ";
            inorder (node -> right);
        }
        
        void postorder() { postorder(root); }
        
        void postorder (Node* node) {
            if (node == NULL) return;
            postorder(node -> left);
            postorder(node -> right);
            cout << node -> data << " ";
        }
};

int main (){
    Tree tree;
    int value;
    cout << " Masukkan nilai ke program Tree (Masukkan -1 untuk berhenti) : " << endl;
    while (true) {
        cout << " Input nilai : ";
        cin >> value;
        if (value == -1) break;
        tree.insert(value);
    }
    
    cout << " Pre-order traversal : ";
    tree.preorder();
    cout << endl;
    
    cout << " In-order traversal : ";
    tree.inorder();
    cout << endl;
    
    cout << " Post-order traversal : ";
    tree.postorder();
    cout << endl;
    
    return 0;
}
