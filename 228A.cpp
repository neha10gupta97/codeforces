#include<iostream>
#include<algorithm>
using namespace std;
main(){
	int i,arr[4];
	int count=1;
	for(i=0;i<4;i++)
		cin>>arr[i];
	sort(arr,arr+4);
	for(i=0;i<3;i++){
		if(arr[i]==arr[i+1])
			count+=1;
	}
	cout<<count-1<<endl;
}
