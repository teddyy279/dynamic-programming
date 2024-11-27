#include <iostream>
#include <vector>
using namespace std;

// Hàm tính độ dài của các xâu Fibonacci
void calculateLengths(vector<long long>& lengths, int n) {
    lengths[1] = 1; // G(1) = "A"
    lengths[2] = 1; // G(2) = "B"
    for (int i = 3; i <= n; ++i) {
        lengths[i] = lengths[i-2] + lengths[i-1];
    }
}

// Hàm tìm ký tự tại vị trí thứ i trong xâu Fibonacci thứ n
char findFibonacciChar(int n, long long i, const vector<long long>& lengths) {
    if (n == 1) return 'A';
    if (n == 2) return 'B';
    if (i <= lengths[n-2]) {
        return findFibonacciChar(n-2, i, lengths);
    } else {
        return findFibonacciChar(n-1, i - lengths[n-2], lengths);
    }
}

int main() {
    int t;
    cin >> t;
    vector<pair<int, long long>> tests(t);
    int maxN = 0;

    for (int i = 0; i < t; ++i) {
        cin >> tests[i].first >> tests[i].second;
        if (tests[i].first > maxN) {
            maxN = tests[i].first;
        }
    }

    vector<long long> lengths(maxN + 1);
    calculateLengths(lengths, maxN);

    for (const auto& test : tests) {
        int n = test.first;
        long long i = test.second;
        cout << findFibonacciChar(n, i, lengths) << endl;
    }

    return 0;
}
/*Với input 6 4, ta có:
( G(6) = G(4) + G(5) )
( G(4) = G(2) + G(3) )
( G(2) = B )
( G(3) = G(1) + G(2) = AB )
( G(4) = BAB )
( G(5) = AB + BAB = ABBAB )
( G(6) = BAB + ABBAB = BABABBAB )
Ký tự thứ 4 của ( G(6) ) là A.
*/
