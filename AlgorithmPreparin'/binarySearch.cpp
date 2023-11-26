#include <iostream>
#include <cassert>
#include <algorithm>

using namespace std;

const int N = (int)1e5 + 5;
typedef pair<int, int> pii;


pii p[N];
int n, m;

int binary_search (int x) {
    if (x < p[1].first || p[n].first < x)
		return -1;
    int l = 1, r = n;
    while (l < r) {
        int mid = (r - l) / 2 + l;
        if (p[mid].first < x) {
            l = mid + 1;
        } else {
            r = mid;
        }
    }
    return p[l].second;
}



int main(){
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int x; cin >> x;
        p[i].first = x; 
        p[i].second = i;
    }

    sort(p + 1, p + n + 1);
    int x; cin >> x;

    cout << binary_search(x) << endl;
    return 0;
}