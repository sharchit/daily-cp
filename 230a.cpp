#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> first, pair<int, int> sec) {
    if(first.first != sec.first)
        return first.first < sec.first;
    else
        return first.second > sec.second;
}

bool solve(vector<pair<int, int>> l, int s) {
    for(auto p: l) {
        if(s > p.first)
            s += p.second;
        else
            return false; 
    }
    return true;
}

int main() {
    int s, n;
    cin>>s>>n;
    vector<pair<int, int>> lev (n);

    for(int i = 0; i < n; i++) {
        cin>>lev[i].first>>lev[i].second;
    }

    sort(lev.begin(), lev.end(), cmp);
    if(solve(lev, s))
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
    
}