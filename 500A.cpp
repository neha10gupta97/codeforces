#include<iostream>
using namespace std;
main(){
	int i,n,t,x;
	cin>>n>>t;
	int arr[n-1];
	for(i=0;i<n-1;i++)
		cin>>arr[i];
	int a=1;i=0;
	while(i<n-1){
		x=a+arr[i];
		if(x==t){
			cout<<"YES"<<endl;
			return 0;
		}
		i=x-1;
		a=x;
	}
	cout<<"NO"<<endl;
}
