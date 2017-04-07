#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,x;
	cin>>n>>m;
	if(n>m){
		x=n;
		n=m;
		m-x;
	}
	while(1){
		x =n;
		n=m%n;
		m=x;
		if(n==0)
			break;
	}
	cout<<x<<endl;
}
