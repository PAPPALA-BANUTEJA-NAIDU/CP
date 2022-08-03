#include <cmath>
#include<string>
#include <unordered_map>
using namespace std;
class Node {
    char data;
    std::unordered_map<char, Node*> m;
    bool isTerminal ;

public:
    Node (char data) {
        this->data = data;
        isTerminal = false;
    }
    friend class Trie;

};

class Trie {
    Node * root;
public:
    Trie() {
        root = new Node('\0');
    }

    void insert(string word) {
        Node * temp = root;

        for(char x: word) {
            if(temp->m[x] == 0) {
                Node * n = new Node(x);
                temp->m[x] = n;
            }
            temp = temp->m[x];
        }
        temp->isTerminal = true;
    }

    bool search(string word) {
        Node * temp = root;
        for(auto ch : word) {
            if(temp->m.count(ch) == 0) 
                return false;
            temp = temp->m[ch];
        }
        return temp->isTerminal;
    }
};
