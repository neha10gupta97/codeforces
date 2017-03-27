#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k,i;
	cin>>n>>k;
	int a[n];
	int sum=0;
	for(i=0;i<n;i++)
		cin>>a[i];
	for(i=1;i<n;i++){
		if(a[i]+a[i-1]<k){
			sum+=k-a[i]-a[i-1];			
			a[i]=k-a[i-1];
			
		}
	}
	cout<<sum<<endl;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

