#include <bits/stdc++.h>

using namespace std;
    // 7         
    // 9 12 5 10 14 3 10
    // 10
    // 9 5 3 10 10 12 14 
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        ios_base::sync_with_stdio(false);
        cin.tie(0);
        int cnt1 = 0, cnt2 = 0;
        for (auto i : nums) {
            if (i < pivot) cnt1++;
            else if (i == pivot) cnt2++;
        }
        
        vector <int> ans(nums.size());
        
        int cnt3 = cnt1 + cnt2;
        cnt2 = cnt1;
        cnt1 = 0;
        for (auto i : nums) {
            if (i < pivot) ans[cnt1++] = i;
            else if (i == pivot) ans[cnt2++] = i;
            else ans[cnt3++] = i;
        }

        return ans;
    }

int main(){
    int n; cin >> n;
    vector <int> v;
    for (int i = 0; i < n; ++i) {
        int num; cin >> num;
        v.push_back(num);
    }

    int pivot; cin >> pivot;

    vector <int> res = pivotArray(v, pivot);

    for (auto i : res) {
        cout << i << ' ';
    }

    cout << '\n';

    return 0;
}