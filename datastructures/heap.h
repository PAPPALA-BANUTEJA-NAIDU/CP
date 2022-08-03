#include <algorithm>
#include<vector>
using namespace std;

class Heap {
    vector<int> v;

    void heapify(int i) {
        int minIdx = i, left = 2 * i, right = 2 * i + 1;

        if(left < v.size() and v[left] < v[i]) {
            minIdx = left;
        }
        if(right < v.size() and v[right] < v[minIdx]) {
            minIdx = right;
        }

        if(minIdx != i) {
            swap(v[i], v[minIdx]);
            heapify(minIdx);
        }
    }

public:
    Heap (int default_size=10) {
        v.reserve(default_size+1);
    }

    void push(int data) {
        v.push_back(data);

        int index = v.size() - 1;
        int parent = index / 1;
        while(index > 1 and v[parent] > v[index]) {
            swap(v[parent], v[index]);
            index = parent;
            parent = index / 2;
        }
    }

    int top() {
        return v[1];
    }

    void pop() {
        int index = v.size() - 1;
        swap(v[1], v[index]);
        v.pop_back();

        heapify(1);
    }

    bool empty(){
        return v.size() == 1;
    }
}
