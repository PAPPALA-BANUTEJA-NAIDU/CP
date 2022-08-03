#include <bits/stdc++.h>
#include "list.h"
using namespace std;

int main() {
    List l;
    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    l.push_back(4);
    l.push_back(5);


    l.reverse();

    Node *head = l.begin();
    while(head != NULL) {
        cout << head->getData() << "->";
        head = head->next;
    }
    cout << endl;
    return 0;
}
