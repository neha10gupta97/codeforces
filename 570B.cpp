#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,a,i,p=0;
	cin>>n>>m;
	p=n/2;
	if(n==1)
		a=m;
	else if(m>p)
		a=m-1;
	else
		a=m+1;
	cout<<a<<endl;
}
