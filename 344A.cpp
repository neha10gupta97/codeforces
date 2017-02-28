#include<iostream>
using namespace std;
main(){
	int i,n;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	int count=1;
	for(i=0;i<n-1;i++){
		if((arr[i]%10)==(arr[i+1]/10%10))
			count+=1;
		
	}
	cout<<count<<endl;
}
