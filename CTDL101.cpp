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
			set<int> se;
			cout<<i<<": ";
			for(int j=0;j<canh;j++){
				if(a[j]==i) se.insert(b[j]);
				if(b[j]==i) se.insert(a[j]);
			}	
			for (auto& str : se){
        			cout << str << " ";
    		}
    		cout<<endl;
		}
	}
    return 0;
}

