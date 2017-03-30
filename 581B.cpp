#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i;
	cin>>n;
	int arr[n];	
	for(i=0;i<n;i++)
		cin>>arr[i];
	reverse(arr,arr+n);
	int max=arr[0];
	int b[n];
	b[0]=0;
	for(i=1;i<n;i++){
		if(arr[i]<=max)
			b[i]=max+1-arr[i];
		else{
			max=arr[i];
			b[i]=0;
		}
	}
	for(i=n-1;i>=0;i--)
		cout<<b[i]<<" ";
	cout<<endl;
	
}

		
