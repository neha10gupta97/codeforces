#include<bits/stdc++.h>
using namespace std;
main(){
	long long int b,q,l,m,i,x,count=0;
	cin>>b>>q>>l>>m;
	map <long long int,int> map;
	for(i=0;i<m;i++){
		cin>>x;	
		map[x]=1;
	}
	if(q==1 && map[b]){
		cout<<"0"<<endl;
		return 0;
	}
	else if(q==1 && !map[b]){
		cout<<"inf"<<endl;
		return 0;
	}
	else{
		while(abs(b)<=l){
			if(!map[b])			
				count++;
			b*=q;
		}
	}
	cout<<count<<endl;
}
			
