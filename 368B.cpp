#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,i,l;
	cin>>n>>m;
	int narr[n],marr[n];
	set<int>s;
	for(i=0;i<n;i++)
		cin>>narr[i];
	for(i=n-1;i>=0;i--){
		s.insert(narr[i]);
		marr[i]=s.size();
	}
	//cout<<s.size();
	while(m--){
		cin>>l;
		cout<<marr[l-1]<<endl;
	}
}
