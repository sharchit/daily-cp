#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, tv = 0;
    cin>>n>>m;
    int arr[n];

    for(int i = 0; i < n; i++) 
        cin>>arr[i];
    
    sort(arr, arr + n);

    int i = 0, money = 0;
    while(tv < m && i < n) {
        if(arr[i] < 0)
            tv++, money += arr[i];
        i++;
    }

    cout<<money * -1<<endl;
}