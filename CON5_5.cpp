#include <iostream>
#include <vector>
using namespace std;

#define MOD 1000000007

unsigned long long check(int n, int k) {
    vector<vector<unsigned long long>> dp(n + 1, vector<unsigned long long>(k + 1, 0));

    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= min(i, k); ++j) {
            if (j == 0 || j == i)
                dp[i][j] = 1;
            else
                dp[i][j] = (dp[i - 1][j] + dp[i - 1][j - 1]) % MOD;
        }
    }

    return dp[n][k];
}

int main() {
    int s;
    cin >> s;
    while (s--) {
        int n, k;
        cin >> n >> k;
        cout << check(n, k) << endl;
    }
    return 0;
}

