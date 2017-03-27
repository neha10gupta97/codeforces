#include<bits/stdc++.h>
using namespace std;
//normal string method...search the index from both string arr and compare length OR:
main(){
	int i,n,m;
	cin>>n>>m;
	map<string,string> st;
	string s1,s2;
	for(i=0;i<m;i++){
		cin>>s1>>s2;
		st[s1]=s2;
	}
	while(n--){
		cin>>s1;
		s2=st[s1];
		int l1=s1.length();
		int l2=s2.length();
		if(l1<=l2)
			cout<<s1<<" ";
		else
			cout<<s2<<" ";
	}
	
}	
		
