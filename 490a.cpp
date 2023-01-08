#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin>>n;

    vector <int> stu (n);
    vector<int> ones, twos, threes;

    for(int i = 0; i < n; i++) {
        cin>>stu[i];
        if(stu[i] == 1) ones.push_back(i + 1);
        if(stu[i] == 2) twos.push_back(i + 1);
        if(stu[i] == 3) threes.push_back(i + 1);
    }

    int w = min(min(ones.size(), twos.size()), threes.size());
    cout<<w<<endl;
    if(w != 0) {
        for(int i = 0; i < w; i++)
            cout<<ones[i]<<" "<<twos[i]<<" "<<threes[i]<<endl;
    }
}