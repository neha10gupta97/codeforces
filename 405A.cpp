#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int n,i;
	cin>>n;
	int arr[n];
	for(i=0;i<n;i++)
		cin>>arr[i];
	sort(arr,arr+n);
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
