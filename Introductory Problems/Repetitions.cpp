#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    vector<int> v;
    cin >> s;

    v.push_back(1);
    int n = s.size();
    for(int i=1; i<n; i++){
        if(s[i] == s[i-1]){
            v.push_back(v.back() + 1);
        }else{
            v.push_back(1);
        }
    }

    sort(v.begin(), v.end());
    cout << v.back();

    return 0;
}