#include<bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s1, s2; cin >> s1 >> s2;
    int n = s1.length(); 
    int m = s2.length();
    s1 = "0" + s1;
    s2 = "0" + s2;
    for(int i = 1; i <= n; i++) F[i][0] = i; // nếu xâu thứ 1 có n kí tự mà xâu thứ 2 có 0 kí tự thì phải xoá đi i lần kí tự
    for(int j = 1; j <= n; j++) F[0][j] = j; // nếu xâu thứ 1 không có kí tự nào thì phải mất j bước thêm kí tự vào xâu 1
    for(int  i = 1; i <= n; i++){
        for(int j = 1; j <= m; j++){
            if(s1[i] != s2[j]){
               F[i][j] = min({F[i - 1][j - 1], F[i - 1][j], F[i][j - 1]}) + 1;
            }
            else F[i][j] = F[i - 1][j - 1];
        }
    }
}
