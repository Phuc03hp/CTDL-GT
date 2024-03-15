// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
int main() {
    int s; cin>>s;
    while(s--){
        int n; cin>>n;
        int check=0;
        while(n--){
            int k; cin>>k;
            if(k==0) check++;
        }
        cout<<check<<endl;
    }
}
