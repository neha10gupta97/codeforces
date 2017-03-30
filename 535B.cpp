#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;	
	int i,ans=0,x,l=0,yes=0;
	x=n;
	while(x){
		l++;
		x/=10;
	}
	ans=pow(2,l-1)-2;
	for(i=pow(10,l-1);i<n;i++){
		x=i,yes=0;		
		while(x){
			if(x%10!=4&x%10!=7){
				yes=1;
				break;
			}
		}
		if(yes==0)
			ans++;
	}
	cout<<ans<<endl;
}
			
