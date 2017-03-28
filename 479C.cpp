#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i,a,b;
	cin>>n;
	vector <pair<int,int> > av;
	for(i=0;i<n;i++){
		cin>>a>>b;
		av.push_back(make_pair(a,b));
	}
	sort(av.begin(),av.end());
	int d=av[0].second;
	
	for(i=1;i<n;i++){
		if(d>av[i].second)
			d=av[i].first;
		else
			d=av[i].second;
	}
		
	cout<<d<<endl;
}
