#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

long long F[93];

void ktao(){
    F[0] = 0, F[1] = 1;
    for(int i = 2; i < 93; i++){
        F[i] = F[i - 1] + F[i - 2];
        F[i] %= mod;
    }
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    ktao();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}