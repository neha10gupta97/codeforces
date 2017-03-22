#include<bits/stdc++.h>
using namespace std;
main(){ 
	int n,i;
	cin>>n;
	long int arr[n];
	cin>>arr[0];
	long long int cmax=0,cmin=0;
	long int min=arr[0],max=arr[0];
	for(i=1;i<n;i++){
		cin>>arr[i];
		if(min>arr[i])
			min=arr[i];
		if(max<arr[i])
			max=arr[i];
	}
	for(i=0;i<n;i++){
		if(max==arr[i])
			cmax++;
		if(min==arr[i])
			cmin++;
	}
	//cout<<cmax<<" "<<cmin<<endl;
	long int diff=max-min;
	long long int ans;
	if(cmax==n){
		ans=cmax*(cmax-1)/2;
	}
	else
		ans=cmax*cmin;

	cout<<diff<<" "<<ans<<endl;
}
