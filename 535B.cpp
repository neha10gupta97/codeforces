#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;	
	int i,ans=0,x,l=0,yes=0;
	x=n;
	while(x){
		l=x%10;
		if(l==4)
			ans+=1*pow(2,yes);
		else if(l==7)
			ans+=2*pow(2,yes);
		x/=10;
		yes++;
	}
	
	cout<<ans<<endl;
}
			
