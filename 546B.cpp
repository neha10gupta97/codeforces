#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i;
	cin>>n;
	int count=0;
	int arr[n],a[n+1]={0};
	for(i=0;i<n;i++){		
		cin>>arr[i];
		a[arr[i]]++;
	}
	for(i=1;i<n;i++){
		if(a[i]>1){
			count+=a[i]-1;	
			a[i+1]+=a[i]-1;
		}
	}
	if(a[n]>1){
		int y=a[n]-1;
		y=y*(y+1)/2;	
		count+=y;
	}

	cout<<count<<endl;
}
