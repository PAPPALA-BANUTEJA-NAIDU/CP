#include <algorithm>
#include<bits/stdc++.h>
#include <cstdio>
#include <iterator>
#include <queue>
#include <vector>
using namespace std;

class Car {
public:

    string id;
    int x, y;

    Car(string id, int x, int y) {
        this->id = id;
        this->x = x;
        this->y = y;
    }

    int dis() const {
        return x * x + y * y;
    }

};

class Compare {
public:
    bool operator() (Car A, Car B) {
        return A.dis() < B.dis();
    }
};

void printNearestCars(vector<Car> cars, int k) {
    priority_queue<Car, vector<Car>, Compare> max_heap(cars.begin(), cars.begin()+k);
    
    for(int i = k; i < cars.size(); i++) {
        auto car = cars[i];

        if(car.dis() < max_heap.top().dis()) {
            max_heap.pop();
            max_heap.push(car);
        }

    }
    vector<Car> output;

    while(!max_heap.empty()) {
        //cout << max_heap.top().id << "\n";
        output.push_back(max_heap.top());
        max_heap.pop();
    }

    reverse(output.begin(), output.end());
    for(auto x: output) {
        cout << x.id << '\n';
    }
}

int main() {
    int n, k;
    cin >> n >> k;

    string id;
    int x, y;

    vector<Car>cars;

    for(int i = 0; i < n; i++) {
        cin >> id >> x >> y;
        cars.push_back(Car(id, x, y));
    }

    printNearestCars(cars, k);
}
