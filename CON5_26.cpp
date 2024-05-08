#include <bits/stdc++.h>
using namespace std;
int a[100],klg[100];
long long tong_now=0,tong_res=0,tongkl;
void Backtracking(int k, int n){
    for(int i = 0; i<= 1; i++)
    {
        a[k] = i;
        if(k == n-1){
            for(int i=0;i<n;i++){
            	if(a[i]==1){
            		tong_now+=klg[i];
				} 
			}
			if(tong_now>=tong_res && tong_now<=tongkl) tong_res=tong_now;
			tong_now=0;
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
    	cin>>tongkl>>n;
    	for(int i=0;i<n;i++){
    		cin>>klg[i];
		}
		Backtracking(0,n);
		cout<<tong_res<<endl;
		tong_now=0;
		tong_res=0;
		a[n+1]={0};
		klg[n+1]={0};
		tongkl=0;
	}
}
