#include<bits/stdc++.h>
using namespace std;

class unionFind {
	vector<int> parent;
	vector<int> rank;

	int count, N;

	bool validate(int p) {
		return (p >= 0 && p < N);
	}

public:

	unionFind(int N) : parent(N), rank(N, 0), N(N), count(N) {
		for(int i = 0; i < N; i++) 
			parent[i] = i;
	}

	int find(int p);
	int getCount() const;
	bool connected(int p, int q);
	void Union(int p, int q);;
	~unionFind();
};

int unionFind::find(int p) {
	if(!validate(p))
		return -1;
	while(p != parent[p]) {
		p = parent[p] = parent[parent[p]];
	}
	return p;
}

int unionFind::getCount() const {
	return count;
}

bool unionFind::connected(int p, int q) {
	return find(p) == find(q);
}

void unionFind::Union(int p, int q) {
	int rootP = find(p);
	int rootQ = find(q);
	if(rootP == rootQ) return;

	if(rootP < rootQ) parent[rootP] = rootQ;
	else {
		parent[rootQ] = rootP;
		if (rank[rootP] == rank[rootQ])
			rank[rootQ]++;
	}
	count--;
}

unionFind::~unionFind()  {}

int main() {
    unionFind uf(5);
    cout << uf.getCount() << endl;
    cout << uf.connected(2, 4) << endl;
    uf.Union(1, 2);
    uf.Union(3, 4);
    cout << uf.getCount() << endl;
    uf.Union(1, 3);
    cout << uf.connected(2, 3) << endl;
}
