#include <iostream>
#include <string>
using namespace std;

string binaryToGray(string binary) {
    string gray = "";
    gray += binary[0];
    for (int i = 1; i < binary.length(); i++) {
        gray += ((binary[i - 1] == binary[i]) ? '0' : '1');
    }
    return gray;
}
int main() {
    int T;
    cin >> T;
    while (T--) {
        string binary;
        cin >> binary;
        cout << binaryToGray(binary) << endl;
    }

    return 0;
}
