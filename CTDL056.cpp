#include <bits/stdc++.h>
using namespace std;
long long to_ten(string s){
    int j=0;
    long long res=0;
    for(int i=s.length()-1;i>=0;i--){
        int a=s[i]-'0';
        res+=(a*pow(2,j));
        j++;
    }
    return res;
}
int main()
{
	int s; cin>>s;
	while(s--){
		string a,b; cin>>a>>b;
		long long aa=to_ten(a);
		long long bb=to_ten(b);
		long long res=aa*bb;
		cout<<res<<endl;
	}
}

