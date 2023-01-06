#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;
    int arr[n];
    map<int, int> m;

    for(int i = 0; i < n; i++) {
        cin>>arr[i];
        m[arr[i]] ++;
    }

    vector<pair<int, int>> v;
    for(auto i: m)
        v.push_back(make_pair(i.first, i.second));

    long long f[n];
    for(int i = 0; i < v.size(); i++) {
        int pr = i - 1;
        while(pr >= 0 && v[pr].first + 1 == v[i].first) pr--;
        if(pr == -1) f[i] = 1LL * v[i].first * v[i].second;
        else f[i] = f[pr] + 1LL * v[i].first * v[i].second;
        if (i != 0)
            f[i] = max(f[i], f[i - 1]);
    }
    cout<<f[v.size() - 1]<<endl;
}
