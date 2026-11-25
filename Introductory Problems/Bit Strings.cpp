#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n, mod = 1e9+7, ans = 1;
    cin >> n;
    for(int i=0; i<n; i++){
        ans = ans * 2 % mod;
    }
    cout << ans;
}