#include <bits/stdc++.h>
using namespace std;

int main() {
    int s;
    cin >> s;
    while (s--) {
    	int dinh, canh;
    	cin>>dinh>>canh;
    	int a[canh], b[canh];
    	for(int i=0;i<canh;i++){
    		cin>>a[i];
    		cin>>b[i];
		}
		for(int i=1;i<=dinh;i++){
			cout<<i<<": ";
			for(int j=0;j<canh;j++){
				if(a[j]==i) cout<<b[j]<<" ";
			}	
    		cout<<endl;
		}
	}
    return 0;
}

