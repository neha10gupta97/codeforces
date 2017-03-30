#include<bits/stdc++.h>
using namespace std;
main(){
	int i,n;
	cin>>n;
	int l[n],r[n];
	int ans=0,L=0,R=0;
	for(i=0;i<n;i++){
		cin>>l[i]>>r[i];
		L+=l[i];
		R+=r[i];
	}
	int sum=abs(L-R),ll,rr;
	for(i=0;i<n;i++){
		ll=L-l[i]+r[i];
		rr=R+l[i]-r[i];
		if(abs(ll-rr)>sum){
			sum=abs(ll-rr);
			ans=i+1;
		}
	}
	cout<<ans<<endl;
}
