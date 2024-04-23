#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

long long F[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin >> n;
    F[0] = 1;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 6; j++){
            if(i >= j){
                F[i] += F[i - j];
            }
            F[i] %= mod;
        }
    }
    cout << F[n];
}

