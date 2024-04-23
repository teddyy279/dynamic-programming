#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

long long F[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, x; cin >> n >> x;
    int coin[n + 1];
    for(int i = 1; i <= n; i++){
        cin >> coin[i];
    }
    F[0] = 1;
    for(int i = 1; i <= x; i++){
        for(int j = 1; j <= n; j++){
            if(i >= coin[j]){
            F[i] += F[i - coin[j]];
            }
            F[i] %= mod;
        }
    }
    cout << F[x];
}

