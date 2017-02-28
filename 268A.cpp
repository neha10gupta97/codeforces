#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int i,j,host[n],guest[n];
	for(i=0;i<n;i++)
		cin>>host[i]>>guest[i];
	int count=0;
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(host[i]==guest[j])
				count+=1;
		}
	}
	cout<<count<<endl;
}
