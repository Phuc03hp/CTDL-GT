#include <bits/stdc++.h>
using namespace std;
int main(){
    long long s; cin>>s;
    while(s--){
        long long a, b; cin>>a>>b;
        long long ok=1;
        while(ok){
            if(b%a==0) {
                cout<<"1/"<<b/a<<endl;
                ok=0;
            }
            else{
                long long res=b/a+1;
                cout<<"1/"<<res<<" + ";
                a=a*res-b;
                b=b*res;
            }
        }
    }
}
