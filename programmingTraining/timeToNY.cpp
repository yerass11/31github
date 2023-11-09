#include <bits/stdc++.h>

using namespace std;

void timeToNY(int h, int m, int ny) {
    int t = h * 60 + m;
    int time = ny - t;
    cout << time << endl;
}

int main(){
    int n; cin >> n;
    int ny = 60 * 24;
    while (n--) {
        int h, m; cin >> h >> m;
        timeToNY(h, m, ny);
    }

    return 0;
}