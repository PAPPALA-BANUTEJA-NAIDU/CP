#include <cstddef>
class List;
class Node {
    int data;
public:
    Node * next;
    Node(int n): data(n), next(NULL) {};
    int getData() {
        return data;
    }
    friend class List;
    ~Node() {
        if(next != NULL)
            delete next;
    }
};

class List {
    Node * head;
    Node * tail;
public:
    List(): head(NULL), tail(NULL) {}
    
    Node * begin() {
        return head;
    }


    int search_helper(Node * temp, int key) {
        if(temp == NULL)
            return -1;
        if(temp->data == key) 
            return 0;

        int subInd = search_helper(temp->next, key);
        if(subInd == -1)
            return -1;
        return subInd + 1;
    }

    void push_front(int val) {
        if(head == NULL) {
            Node * n = new Node(val);
            head = tail = n;
        }
        else {
            Node * n = new Node(val);
            n->next = head;
            head = n;
        }
    }

    void push_back(int val) {
        if(head == NULL) {
            Node * n = new Node(val);
            head = tail = n;
        }
        else {
            Node * n = new Node(val) ;
            tail->next = n;
            tail = n;
        }
    }

    void insert(int data, int pos) {
        if (pos == 0) {
            push_front(data);
            return;
        }

        Node * temp = head;
        for(int i = 0; i < pos - 1; i++) {
            temp = temp->next;
        }
        Node * n = new Node(data);
        n->next = temp->next;
        temp->next = n;
    }

    int search(int key) {
        Node *temp = head;
        int idx = 0;

        while(temp != NULL) {
            if(temp->data == key) {
                return idx;
            }
            temp = temp->next;
            idx++;
        }
        return -1;
    }

    int recursive_search(int key) {
        int idx = search_helper(head, key);
        return idx;
    }

    ~List() {
        if(head != NULL)
        {
            delete head;
            head = NULL;
        }
    }

    void pop_front() {
        Node * temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    void reverse() {
        Node *c = head;
        Node *p = NULL;
        tail = head;
        Node *n ;
        while(c != NULL) {
            n = c->next;
            c->next = p;
            p = c;
            c = n;

        }
        head = p;
    }
};
