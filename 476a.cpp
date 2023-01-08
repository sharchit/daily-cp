#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ones, twos;
    cin>>n>>m;
    twos = n / 2;
    ones = n % 2;
    
    while((twos + ones) % m != 0 && twos > 0) {
        twos --;
        ones += 2;
    }

    if((twos + ones) % m == 0)
        cout<<twos + ones<<endl;
    else
        cout<<-1<<endl;
}