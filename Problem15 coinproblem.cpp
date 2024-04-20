#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, s; cin >> n >> s;
    int coin[n];
    for(int &x : coin) cin >> x;
    int F[s + 1]; F[0] = 0;
    for(int i = 1; i <= s; i++){
        F[i] = 1e9; // để cập nhật min
        for(int j = 0; j < n; j++){
            if(i >= coin[j]){
                F[i] = min(F[i], F[i - coin[j]]  + 1);
            }
        }
    }
    cout << F[s];
}

