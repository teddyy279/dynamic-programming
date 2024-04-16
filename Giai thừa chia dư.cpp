#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

long long F[1000001];

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin >> t;
    F[0] = 1; // 0! = 1;
    for(int i = 1; i <= 1000000; i++){
        F[i] = F[i - 1] * i;  // 1! = 1 * 0! , 2! = 2 * 1!, 3! = 3 * 2!...
        F[i] %= mod;
    }
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}