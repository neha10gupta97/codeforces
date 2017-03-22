#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,i;
	cin>>n;
	int arr[n];
	cin>>arr[0];
	for(i=1;i<n;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	cin>>m;
	int q;
	while(m--){
		cin>>q;
		cout<<(lower_bound(arr,arr+n,q)-arr )+1<<endl;
	}
}
			
	
