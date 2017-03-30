#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i;
	cin>>n;
	int arr[n];
	int ans=0;
	for(i=0;i<n;i++)
		cin>>arr[i];
	ans=arr[0];
	int e=0;
	for(i=1;i<n;i++){
		e+=arr[i-1]-arr[i];
		if(e<0){
			ans+=e*-1;
			e=0;
		}
	}
	cout<<ans<<endl;
}

/// or can solve it by sorting first and get the max element
