#include <cstddef>
template <typename T>
class Node {
    T data;
    public:
    Node<T> * next;
    Node(T data) {
        data = data;
    }
};

template <typename T>
class Stack {
    Node<T> * head;
public: 
    Stack() {
        head = NULL;
    }

    bool empty() {
        return head == NULL;
    }

    void push(T data) {
        Node<T> * n = Node<T>(data);
        n->next = head;
        head = n;
    }

    void pop() {
        if(!empty()) {

        }
    }
};
