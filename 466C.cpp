#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i;
	cin>>n;
	long long int arr[n];
	cin>>arr[0];
	for(i=1;i<n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	long long int ans=0,x=0;
	for(i=0;i<n-1;i++){
		if(3*arr[i]==2*arr[n-1])
			ans+=x;
		if(3*arr[i]==arr[n-1])
			x++;
	}
	cout<<ans<<endl;
}
