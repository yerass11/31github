#include <bits/stdc++.h>

using namespace std;
long long x[1000000];
long long y[1000000];

int main() {

    long long n; cin >> n;
    vector <long long> v;
    vector <long long> index;
    for (long long i = 0; i < n; i++) {
        long long k;
        cin >> k;
        x[i] = k;
        y[k]++;
        if(k == 0) index.push_back(i);
    }

    for(long long i = 1; i <= n; i++) {
        if(y[i] == 0) v.push_back(i);
    }

    long long huge = v.size();
    long long cnt = 0;

    for(long long i=0;i<huge;i++) {
        x[index[i]] = v[huge-1-i];
    }
    long long cnt2 = 0;
    bool flag = true;
    while(flag){
        for(long long i=0;i<huge;i++) {
            flag = false;
            if(x[index[i]] == index[i]+1) {
                flag = true;
                swap(x[index[i]], x[index[huge-cnt2-1]]);

                cnt2++;
            }
        }
    }
    
    for(long long i=0;i<n;i++) {
        cout << x[i] <<" ";
    }

    return 0;
}