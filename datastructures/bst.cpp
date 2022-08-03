#include<bits/stdc++.h>
using namespace std;

class Node {
    public:
    int data;
    Node * left;
    Node *right;
    Node (int data) {
        this->data = data;
        left = right = NULL;
    }
};

Node * insert(Node * root, int data) {
    if(root == NULL) {
        return new Node(data);
    }
    if(data < root->data) 
        root->left =  insert(root->left, data);
    else 
        root->right = insert(root->right, data);
    return root;
}

bool search(Node * root, int key) {
    if(root == NULL) {
        return false;
    }
    if(key < root->data) {
        return search(root->left, key);
    }
    else if(key > root->data) {
        return search(root->right, key);
    }
    else {
        return true;
    }
}

void printInorder(Node * root) {
    if(root == NULL) 
        return ;
    printInorder(root->left);
    cout << root->data << ' ';
    printInorder(root->right);
}

void printRange(Node * root, int k1, int k2) {
    if(root == NULL) 
        return;
    if(root->data >= k1 and root->data <= k2) {
        printRange(root->left, k1, k2);
        cout << root->data << ' ';
        printRange(root->right, k1, k2);
    }
    else if(root->data < k1) {
        printRange(root->right, k1, k2);
    }
    else {
        printRange(root->left, k1, k2);
    }
}

void printRoot2Leaf(Node * root, vector<Node *> &nodes) {
    if(root == NULL) 
        return;
    if(root->left == NULL and root->right == NULL) {
        for(auto x : nodes) {
            cout << x->data << " ";
        }
        cout << root->data << " ";
        cout << endl;
        return;
    }
    nodes.push_back(root);
    printRoot2Leaf(root->left, nodes);
    printRoot2Leaf(root->right, nodes);
    nodes.pop_back();
}

Node * findMin(Node * root) {
    while(root->left!= NULL) {
        root = root->left;
    }
    return root;
}

Node* remove(Node * root, int key) {
    if(root == NULL) {
        return NULL;
    }
    else if (root->data < key) {
        root->right = remove(root->right, key);
    }
    else if (root->data > key) {
        root->left = remove(root->left, key);
    }
    else {
        if(root->left == NULL and root->right == NULL) {
            delete root;
            root = NULL;
        }
        else if(root->left == NULL) {
            Node * curr = root;
            root = root->right;
            delete curr;
        }
        else if(root->right == NULL) {
            Node * curr = root;
            root = root->left;
            delete curr;
        }
        else {
            Node * curr = findMin(root->right);
            root->data = curr->data;
            root->right = remove(root->right, curr->data);
        }
    }
    return root;
}

int main() {
    Node * root = NULL;
    int arr[] = {8, 3, 10, 1, 6, 14, 4, 7, 13};

    for(int x : arr) {
        root = insert(root, x);
    }

    printInorder(root);
    cout << '\n';
    //int key ;
    //cin >> key;
    //root = remove(root, key);

    //printInorder(root);
    vector<Node*> nodes;

    printRoot2Leaf(root, nodes);
    return 0;
}
