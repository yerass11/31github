#include <iostream>
#include <cassert>
#include <algorithm>
using namespace std;

const int N = (int)1e5 + 5;
typedef pair<int,int> pii;

pii a[N];
int n, m;

int bin_search(int x) {
	if (x < a[1].first || a[n].first < x)
		return -1;
	int l = 1;
	int r = n;
	int res = -1;
	/*
		Find lemost occurence of x == a[i].first
	*/
	while(l <= r) {
		int mid = (l + r) / 2;
		if (x <= a[mid].first) {
			res = mid;
			r = mid - 1;
		} else // a[mid] < x
			l = mid + 1;
	}
	// x = 20
	//          v
	// a: 10 10 20 20 20 30 30
	/*				 m
		a: [10 10 20 20 20 30 30] 1-st iteration
		       m
		a: [10 10 20], res = 4    2-nd iteration
				  m
		a:       [20], res = 4    3-rd iteration
		       ] [     res = 3
	*/
	if (res == -1 || a[res].first != x)
		return -1;
	return a[res].second;
}


int main() {
	scanf("%d", &n);
	for (int i = 1; i <= n; i++) {
		scanf("%d", &a[i].first);
		a[i].second = i;
	}
	sort(a + 1, a + n + 1);
	scanf("%d", &m);
	for (int i = 1; i <= m; i++) {
		int x;
		scanf("%d", &x);
		int pos = bin_search(x);
		printf("%d\n", pos);
	}

	return 0;
}



