#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		cin>>arr[i];
	int max=0,count=0;
	for(int i=0;i<n-1;i++){
		if(arr[i]<=arr[i+1]){
			count++;
			if(max<count)
				max=count;
			//cout<<"max: "<<max<<endl;
		}
		else
			count=0;

	}
	cout<<max+1<<endl;
}
