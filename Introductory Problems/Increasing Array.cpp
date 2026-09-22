#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long int ans = 0, n, q, q1;;
    cin >> n;
    cin >> q;
    for(int i=1; i<n; i++){
        cin >> q1;
        ans += (q1 < q) ? (q - q1) : 0;
        q = max(q, q1);
    }

    cout << ans;

    return 0;
}