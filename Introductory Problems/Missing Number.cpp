#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, ans, q;
    cin >> n;

    ans = n * (n + 1) / 2;
    for(int i=0; i<n-1; i++){
        cin >> q;
        ans -= q;
    }

    cout << ans;

    return 0;
}