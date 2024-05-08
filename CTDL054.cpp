#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a; cin>>a;
	while(a--){
		int sodiem; cin>>sodiem;
		float x[sodiem]={0},y[sodiem]={0};
		for(int i=0;i<sodiem;i++){
			cin>>x[i];
			cin>>y[i];
		}
		float min=99999;
		for(int i=0;i<sodiem-1;i++){
			for(int j=i+1;j<sodiem;j++){
				float check=sqrt(pow(x[i]-x[j],2)+pow(y[i]-y[j],2));
				if(check<min) min=check;
			}
		}
		cout<<fixed<<setprecision(6)<<min<<" "<<endl;
	}
}

