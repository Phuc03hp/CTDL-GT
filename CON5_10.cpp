#include <bits/stdc++.h>
using namespace std;
void TestCase() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> a(n + 1, vector<int>(m + 1));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            cin >> a[i][j];
        }
    }
    vector<vector<int>> f(n + 1, vector<int>(m + 1, INT_MAX));
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= m; ++j) {
            if (i == 1 && j == 1) {
                f[1][1] = a[1][1];
                continue;
            }
            f[i][j] = a[i][j] + min({f[i - 1][j], f[i][j - 1], f[i - 1][j - 1]});
        }
    }
    cout << f[n][m];
}
int main() {
	int T;
    cin >> T;
    while (T--) {
        TestCase();
        cout << endl;
    }
    return 0;
}
