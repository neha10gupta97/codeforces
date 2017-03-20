#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,k,i,frnd=0;
	cin>>n>>m>>k;
	int arr[m+1];
	for(i=0;i<m+1;i++)
		cin>>arr[i];
	for(i=m-1;i>=0;i--){
		int x=(arr[m] ^ arr[i] );
		if(__builtin_popcount (x)<=k)
			frnd++;	
	}
	cout<<frnd<<endl;
	
}

