#include<bits/stdc++.h>
#include <cstddef>
using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;

        Node(int d) {
            data = d;
            left = right = NULL;
        }
};

class HDpair {
    public: 
        int height ;
        int diameter;
};

HDpair optDiameter(Node * root) {
    HDpair n;
    if(root == NULL) {
        n.diameter = n.height = 0;
        return n;
    }

    HDpair Left = optDiameter(root->left);
    HDpair Right = optDiameter(root->right);

    n.height = max(Left.height, Right.height) + 1;

    int d1 = Left.diameter + Right.diameter;
    int d2 = Left.diameter;
    int d3 = Right.diameter;
    n.diameter = max(d1, max(d2, d3));
    return n;
}

Node * preOrderbuild() {
    int d;
    cin >> d;
    if( d == -1 ) {
        return NULL;
    }

    Node * n = new Node(d);
    n->left = preOrderbuild();
    n->right = preOrderbuild();
    return n;
}

Node * levelOrderbuild() {
    int data;
    cin >> data;
    Node* root = new Node(data);
    queue<Node*> q;
    q.push(root);
    while(!q.empty()) {
        Node * current = q.front();
        q.pop();

        int c1, c2;
        cin >> c1 >> c2;
        if(c1 != -1) {
            current->left = new Node(c1);
            q.push(current->left);
        }

        if(c2 != -1) {
            current->right = new Node(c2);
            q.push(current->right);
        }
    }
    return root;
}

void printPreorder(Node * root) {
    if(root == NULL)
        return ;
    cout << root->data << " ";
    printPreorder(root->left);
    printPreorder(root->right);
    return ;
}

void printInorder(Node * root) {
    if(root == NULL) {
        return;
    }

    printInorder(root->left);
    cout << root->data << " ";
    printInorder(root->right);
    return;
}

void printPostorder(Node * root) {
    if(root == NULL) {
        return;
    }

    printPostorder(root->left);
    printPostorder(root->right);
    cout << root->data << " ";
    return;
}

void printLevelorder(Node * root) {
    queue<Node *> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        Node * temp = q.front();
        if(temp == NULL) {
            cout << endl;
            q.pop();
            if(!q.empty()) {
                q.push(NULL);
            }
        }
        else {
            q.pop();
            cout << temp->data << " ";
            if(temp->left)
            q.push(temp->left);
            if(temp->right)
            q.push(temp->right);
        }
    }
    return ;
}

int heightTree(Node * root) {
    if(root == NULL) 
        return 0;
    int h1 = heightTree(root->left);
    int h2 = heightTree(root->right);
    return max(h1, h2) + 1;
}

int diameter(Node * root) {
    if(root == NULL) 
        return 0;
    int d1 = heightTree(root->left) + heightTree(root->right);
    int d2 = heightTree(root->left);
    int d3 = heightTree(root->right);
    return max(d1, max(d2, d3)) + 1;
}

int main() {
    Node* head = levelOrderbuild();
    printPreorder(head);
    cout << '\n';
    printInorder(head);
    cout << '\n';
    printPostorder(head);
    cout << '\n';
    printLevelorder(head);
    cout << "Height is: " << heightTree(head);
    cout << '\n';
    cout << "Diameter is: "<< optDiameter(head).diameter;
}
