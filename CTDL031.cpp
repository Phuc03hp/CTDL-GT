#include <bits/stdc++.h>
using namespace std;
string DtoB(int a){
	string s="";
	while(a){
		if(a%2==0){
			s="0"+s;
			a/=2;
		}
		else{
			s="1"+s;
			a/=2;
		}	
	}
	return s;
}
int BtoD(string s){
	int tong=0;
	for(int i=s.length()-1;i>=0;i--){
		if(s[i]=='1'){
			tong+=pow(2,s.length()-1-i);
		}
	}
	return tong;
}
int main() {
    int a;
    cin >> a;

    while (a--) {
    	int k; cin>>k;
        string s=DtoB(k);
        string res="";
        vector<int> arr(s.length());
        arr[0] = (int)(s[0] - '0');
        for (int i = 1; i < s.length(); i++) {
            arr[i] = (int)(s[i] - '0')^(int)(s[i-1]-'0');
        }
        for (int i = 0; i < s.length(); i++) {
        	string ss=to_string(arr[i]);
            res+=ss;
        }
        cout << BtoD(res)<<endl;
    }
    return 0;
}
