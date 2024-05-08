#include <iostream>
#include <string>
using namespace std;
int F[1001][1001] = {0};
int main() {
    int T;
    cin >> T;
    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;
        for (int i = 0; i <= S1.size(); i++) {
            for (int j = 0; j <= S2.size(); j++) {
                if (i == 0 || j == 0)
                    F[i][j] = 0;
                else if (S1[i - 1] == S2[j - 1])
                    F[i][j] = F[i - 1][j - 1] + 1;
                else
                    F[i][j] = max(F[i - 1][j], F[i][j - 1]);
            }
        }
        cout << F[S1.size()][S2.size()] << endl;
    }
    return 0;
}

