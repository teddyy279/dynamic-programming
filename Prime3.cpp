#include<bits/stdc++.h>

using namespace std;

int mod = 1e9 + 7;

int prime[1000001];
long long F[1000001];

void sang(){
    for(int i = 0; i <= 1000000; i++){
        prime[i] = 1;
    }
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(1000000); i++){
        if(prime[i]){
            for(int j = i * i; j <= 1000000; j += i){
                prime[j] = 0;
            }
        }
    }
}


int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    sang();
    int t; cin >> t;
    int cnt = 0;
    F[2] = 2;
    for(int i = 3; i <= 1000000; i++){
        if(prime[i]){
            F[i] = F[i - 1] * i;
        }
        else F[i] = F[i - 1];
        F[i] %= mod;
    }
    while(t--){
        int n; cin >> n;
        cout << F[n] << endl;
    }
}
