// Dung backtracking dan don vl nma AC :))
#include <bits/stdc++.h>
using namespace std;
int a[100],so[100],counter=0,mod;
void Backtracking(int k, int n){
    for(int i = 0; i<= 1; i++)
    {
        a[k] = i;
        if(k == n-1){
        	int check=0; // dem so luong 1
        	long long tong=0; // luu tong tam thoi
            for(int i=0;i<n;i++){
            	if(a[i]==1){
            		check++;
            		tong+=so[i];
				} 
			}
			if(tong%mod==0 && check>counter) counter=check; 
        }
        else{
            Backtracking(k+1,n);
        }
    }
}
int main()
{
    int s; cin>>s;
    while(s--){
    	int n;
    	cin>>n>>mod;
    	for(int i=0;i<n;i++) cin>>so[i];
    	Backtracking(0,n);
    	cout<<counter<<endl;
    	a[n+1]={0};
    	so[n+1]={0};
    	counter=0;
    	mod=0;
	}
}
