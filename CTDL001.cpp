#include <bits/stdc++.h>
using namespace std;

int arr[10000], a, ok = 1;

void ktao() {
    for (int i = 1; i <= a; i++) arr[i] = 0;
    for (int i = 1; i <= a; i++) cout << arr[i] << " ";
    cout << endl;
}

void sinh() {
    int i = a;
    while (i >= 1 && arr[i] == 1) {
        i--;
    }
    if (i == 0)
        ok = 0;
    else {
        arr[i] = 1;
        for (int j = i + 1; j <= a; j++) arr[j] = 0;
        for (int i = 1; i <= a; i++) cout << arr[i] << " ";
            cout << endl;
    }
}

int main() {
    int s;
    cin >> s;
    while (s--) {
        cin >> a;
        ktao();
        while (ok) {
            sinh();
        }
        ok = 1; // Reset the flag for the next test case
    }
    return 0;
}
