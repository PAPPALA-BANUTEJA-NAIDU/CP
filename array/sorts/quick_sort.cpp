#include<algorithm>
#include<bits/stdc++.h>
#include<functional>
#include<iterator>
#include<vector>
using namespace std;

template<class It, class Compare>
void quicksort(It lo, It hi, Compare comp) {
	if (hi - lo < 2) {
		return ;
	}
	typedef typename std::iterator_traits<It>::value_type T;
	T pivot = *(lo + (hi-lo) / 2);
	It i, j;
	for(i = lo, j = hi-1; ; i++, j--) {
		while (comp(*i, pivot)) 
			i++;
		while (comp(pivot, *j))
			j--;
		if(i >= j)
			break;
		std::swap(*i, *j);
	}
	quicksort(lo, i, comp);
	quicksort(i, hi, comp);
}

template<class It>
void quicksort(It lo, It hi) {
	typedef typename std::iterator_traits<It>:: value_type T;
	quicksort(lo, hi, std::less<T>());
}

int main() {
	int a[] = {32, 71, 12, 45, 26, 80, 53, 33};
	quicksort(a, a+8);
	for(int i=0; i < 8; i++)
		cout << a[i] << " ";
}

