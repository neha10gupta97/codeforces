#include<iostream>
using namespace std;
main(){
	int n,m,i;
	cin>>n>>m;
	int arr[m];
	for(i=0;i<m;i++)
		cin>>arr[i];
	long long int count=arr[0]-1;
	for(i=1;i<m;i++){
		int x=arr[i]-arr[i-1];
		if(x<0)
			x=x+n;
		count+=x;
	}
	cout<<count<<endl;
}
