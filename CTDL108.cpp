#include <bits/stdc++.h>
using namespace std;
int main()
{
	int sbt; cin>>sbt;
	while(sbt--){
		int dinh,canh,start; cin>>dinh>>canh>>start;
		vector<vector<int>> v(dinh+1);
		vector<int> check(dinh+1,1);
		queue<int> q;
		while(canh--){
			int m,n; cin>>m>>n;
			v[m].push_back(n);
		}
		q.push(start);
		check[start]=0;
		while(!q.empty()){
			int now = q.front();
			cout<<now<<" ";
			q.pop();
			for(int i=0;i<v[now].size();i++){
				if(check[v[now][i]]) {
					q.push(v[now][i]);
					check[v[now][i]]=0;
				}
			}
		}
        cout<<endl;
	}
}

