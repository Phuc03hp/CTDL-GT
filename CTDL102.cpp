#include <bits/stdc++.h>
using namespace std;
int main() {
    	int dinh;
    	cin>>dinh;
    	int a[dinh+1][dinh+1];
    	for(int i=1;i<=dinh;i++){
    		for(int j=1;j<=dinh;j++) cin>>a[i][j];
		}
		for(int i=1;i<=dinh;i++){
    		cout<<i<<": ";
    		for(int j=1;j<=dinh;j++){
    			if(a[i][j]==1) cout<<j<<" ";
			}
			cout<<endl;
		}
	
    return 0;
}

