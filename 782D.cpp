#include<bits/stdc++.h>
using namespace std;
main(){
	int i,n;
	cin>>n;
	string a,b,x,y,r[n];
	set <string> s,ban;
	int is=1;
	for(i=0;i<n;i++){
		cin>>a>>b;
		x=a.substr(0,3);
		y=a.substr(0,2)+b[0];
		if(s.count(y)){
			if(s.count(x)||ban.count(x))
				is=0;
			s.insert(x);
			r[i]=x;
		}
		else{
			s.insert(y);
			r[i]=y;
		}
		if(!is)break;
		ban.insert(x);
	}
	if(is){
		cout<<"YES"<<endl;
		for(i=0;i<n;i++)
			cout<<r[i]<<endl;
	}
	else
		cout<<"NO"<<endl;
}
