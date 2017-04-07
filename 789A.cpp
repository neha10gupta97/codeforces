#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i,j,k;
	int day=0;
	cin>>n>>k;
	int arr[n];
	for(i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]%k==0)
			day+=arr[i]/k;
		else
			day+=arr[i]/k+1;		
		
	}
	cout<<(day+1)/2<<endl;

}
