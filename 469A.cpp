#include<iostream>
using namespace std;
main(){
	int i,n,p,q;
	cin>>n;
	int arr[n+1]={0};
	cin>>p;
	int parr[p];
	for(i=0;i<p;i++){
		cin>>parr[i];
		arr[parr[i]]=1;
	}
	cin>>q;
	int qarr[q];
	for(i=0;i<q;i++){
		cin>>qarr[i];
		arr[qarr[i]]=1;
	}
	for(i=1;i<=n;i++){
		if(arr[i]==0){
			cout<<"Oh, my keyboard!"<<endl;
			return 0;
		}
	}
	cout<<"I become the guy."<<endl;
}
