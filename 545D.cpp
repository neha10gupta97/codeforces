#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	int d=arr[0],tot=0;
	for(i=1;i<n;i++){
		if(d>arr[i])
			tot++;
		else
			d+=arr[i];
	}
	cout<<n-tot<<endl;
}
