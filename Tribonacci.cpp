#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;
const int maxn = 1e6 + 1;

long long F[maxn];

void ktao(){
    F[0] = 0, F[1] = 1;
    for(int i = 3; i < 1e6; i++){
        F[i] = F[i - 1] + F[i - 2] + F[i - 3];
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