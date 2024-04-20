#include<bits/stdc++.h>

using namespace std;

int mod  = 1e9 + 7;

int F[1001][1001];
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2;
    cin >> s1 >> s2;
    s1 = "0" + s1;
    s2 = "0" + s2;
    F[0][0] = 0;
    for(int i = 1; i <= s1.length(); i++){
        for(int j = 1; j <= s2.length(); j++){
            if(s1[i] == s2[j]){
                F[i][j] = F[i - 1][j - 1] + 1;
            }
            else{
                F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            }
        }
    }
    int n = s1.length();
    int m = s2.length();
    cout << F[n][m];
}

