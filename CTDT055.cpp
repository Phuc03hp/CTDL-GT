#include <bits/stdc++.h>
using namespace std;

#define MOD 1000000007
const int MAX_N = 100001;
long long memo[MAX_N];

long long res(int n) {
    if (n < 2) return n;
    if (memo[n] != -1) return memo[n];

    memo[n] = (res(n - 1) + res(n - 2)) % MOD;
    return memo[n];
}

int main() {
    int s;
    cin >> s;

    memset(memo, -1, sizeof(memo)); // Kh?i t?o m?ng memo v?i giá tr? -1

    while (s--) {
        int n;
        cin >> n;
        cout << res(n) << endl;
    }

    return 0;
}

