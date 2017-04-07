#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i,x,t=0;
	string d;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>x>>d;		
		if(t<0||t>20000)break;
		if(t==0&&d[0]!='S')break;
		if(t==20000&&d[0]!='N')break;
		if(d[0]=='S')t+=x;
		if(d[0]=='N')t-=x;
	}
	if(i==n&&t==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
