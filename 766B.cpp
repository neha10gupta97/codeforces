#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	for(i=1;i<n-1;i++){
		if(a[i-1]+a[i]>a[i+1]){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
}

