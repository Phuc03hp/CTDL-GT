#include <iostream>
using namespace std;

const int MOD = 1e9 + 7;

// Hàm tính luy th?a modulo
int power(int base, int exponent) {
    int result = 1;
    while (exponent > 0) {
        if (exponent % 2 == 1) {
            result = (1LL * result * base) % MOD;
        }
        base = (1LL * base * base) % MOD;
        exponent /= 2;
    }
    return result;
}

// Hàm tính ngh?ch d?o modulo
int modInverse(int x) {
    return power(x, MOD - 2);
}

// Hàm tính t? h?p C(n, k) modulo MOD
int binomialCoefficient(int n, int k) {
    if (k == 0 || k == n) {
        return 1;
    }

    int numerator = 1;
    for (int i = n; i > max(k, n - k); --i) {
        numerator = (1LL * numerator * i) % MOD;
    }

    int denominator = 1;
    for (int i = 2; i <= min(k, n - k); ++i) {
        denominator = (1LL * denominator * i) % MOD;
    }

    return (1LL * numerator * modInverse(denominator)) % MOD;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int n, k;
        cin >> n >> k;

        int result = binomialCoefficient(n, k);
        cout << result << endl;
    }

    return 0;
}

