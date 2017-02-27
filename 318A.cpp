#include<iostream>
using namespace std;
main(){
	long long int n,k,x;
	cin>>n>>k;
	
	if(n%2==0) x=n/2;
	else x=n/2+1;

	long long int ans;
 	if(k<=x){     		//odd
		ans=(k-1)*2+1;
	}
	else{			//even	
		k=k-x;	
		ans=k*2;
		
	}
	cout<<ans<<endl;
}
