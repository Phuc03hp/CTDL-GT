#include <bits/stdc++.h>
using namespace std;
int n,k,ok=1;
string curString;
void genString(int pos)
{
	int res= stoi(curString);
    if (pos > n)
    {
        if(res%k==0) {
			cout<<res<<endl;
			ok=0;
		}
        return;
    }
    for (char i = '0'; i <= '1'; i ++)
    {
    	char c='1';
    	if(i=='0') c='0';
    	if(i=='1') c='9';
        curString.push_back(c);    //th�m k� t? m?i v�o d�y
        genString(pos + 1);
        curString.pop_back();      //b? k� t? n�y di
    }
}
int main()
{
	n=1;
    while(ok){
    	genString(1);
    	n++;
	}
    return 0;
}
