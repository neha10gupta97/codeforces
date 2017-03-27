#include<bits/stdc++.h>
using namespace std;
main(){
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int x=min(min(a,c),d);
	int sum=x*256;
	a-=x;
	c-=x;
	d-=x;
	int y=min(a,b);
	sum+=y*32;
	cout<<sum<<endl;
}
