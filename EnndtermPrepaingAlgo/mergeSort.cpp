#include <iostream>
#include <cassert>
#include <algorithm>
#include <vector>
using namespace std;

const int N = (int)1e5 + 7;


void merge(int *a, int n, int *b, int m) {
	// {4,8,2,1,9,0,7,6,5}
	
	// 1
	
	// 4, 8, 2, 1, 9
	// 0, 7, 6, 5
	
	// 2
	
	// 4, 8, 2
	// 1, 9
	
	// 0, 7
	// 6, 5

	// 1
	
	// 4, 8, 2, 1, 9
	// 0, 7, 6, 5
	
	// 2
	
	// 4, 8, 2 -> 4, 8; 2
	// 1, 9
	
	// 0, 7
	// 6, 5
	// 5, 6

	vector<int> c;
	int i = 0, j = 0;
	// [6], 1,   [5], 1
	while (i < n || j < m) {
		if (i == n)
			c.push_back(b[j++]);
		else if (j == m)
			c.push_back(a[i++]);
		else if (a[i] < b[j]) // i < n && j < m
			c.push_back(a[i++]);
		else
			c.push_back(b[j++]);
	}
	assert(c.size() == n + m);
	for (int i = 0; i < n + m; i++)
		a[i] = c[i];
}

void merge_sort(int *a, int n) {
	/* 0-index based sort 
		a[0],a[1],...,a[n-1]
	*/
	if (n == 1)
		return;
	merge_sort(a, n / 2);
	merge_sort(a + n / 2, n - n / 2);
	merge(a, n/2, a + n / 2, n - n / 2);
}


int main() {
	const int n = 9;
	int a[n] = {4,8,2,1,9,0,7,6,5};
	// here a - is a pointer to a[0]
	// a[5] = 5 <---> &*(a + 5)
	merge_sort(a, n);
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << "\n";


	return 0;
}



