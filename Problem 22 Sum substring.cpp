#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s; cin >> s;
    int n = s.length();
    s = "0" + s;
    long long F[n + 1];
    F[0] = 0;
    long long sum = 0;
    for(int i = 1; i <= n; i++){
        F[i] = F[i - 1] * 10 + i * (s[i] - '0');
        sum += F[i];
    } 
    cout << sum;
}
