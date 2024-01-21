#include <bits/stdc++.h>
using namespace std;
int arr[10001], a = 0, ok = 1, size;
string s;
void ktao() {
    for (int i = 1; i <= a; i++) arr[i] = 0;
    int j = 1;
    for (int i = 0; i < size; i++) {
        if (s[i] != '?')
            cout << s[i];
        else {
            cout << arr[j];
            j++;
        }
    }
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
        for (int j = i + 1; j <= a; j++)
            arr[j] = 0;
        int v = 1;
        for (int i = 0; i < size; i++) {
            if (s[i] != '?')
                cout << s[i];
            else {
                cout << arr[v];
                v++;
            }
        }
        cout << endl;
    }
}

int main() {
    int q;
    cin >> q;
    cin.ignore();
    while (q--) {
        getline(cin,s);
    	for(int i=0;i<s.length();i++){
        if(s[i]==' ') s.erase(s.begin()+i);
    	}
        size = s.length();
        a = 0;
        for (int i = 0; i < size; i++) {
            if (s[i] == '?')
                a++;
        }
        ktao();
        while (ok) {
            sinh();
        }
        ok = 1; // Reset the flag for the next test case
    }
    return 0;
}

