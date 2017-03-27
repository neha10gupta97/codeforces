#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	int count=0;
	while(n<m){
		n*=2;
		count++;
	}
	while(n!=m){
		n-=1;
		count++;
	}
	cout<<count<<endl;
}
	
