// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
long long to_ten(int k, string s){
    int j=0;
    long long res=0;
    for(int i=s.length()-1;i>=0;i--){
        int a=s[i]-'0';
        res+=(a*pow(k,j));
        j++;
    }
    return res;
}
string ten_to(int k, long long n){
    string res="";
    while(n){
        int a=n%k;
        string ss=to_string(a);
        res=ss+res;
        n=(n-a)/k;
        }
        return res;
}
int main() {
    int s; cin>>s;
    while(s--){
        int k;
        string m,n; 
        cin>>k>>m>>n;
        long long m1,n1;
        m1=to_ten(k,m);
        n1=to_ten(k,n);
        long long z=m1+n1;
        string sss=ten_to(k,z);
        cout<<sss<<endl;
    }
}
