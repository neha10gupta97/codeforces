#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i,q,x;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	cin>>q;
	while(q--){
		cin>>x;
		cout<<upper_bound(arr,arr+n,x)-arr<<endl;
	}
}
