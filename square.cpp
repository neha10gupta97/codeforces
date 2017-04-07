#include<bits/stdc++.h>
using namespace std;
main(){
	int n,k;
	cin>>n>>k;
	int arr[1000],i=0;
	vector <int> v;
	int j,p;
	while(n){
		arr[i++]=n%10;
		n/=10;
	}
	reverse(arr,arr+i);
	n=i;
	while(k--){
		for(i=0;i<n;i++){
			j=0;
			int b[1000]={0};
			int x=arr[i]*arr[i];
			while(x){
				b[j++]=x%10;
				x/=10;
			}
			reverse(b,b+j);
			for(p=0;p<j;p++){
				v.push_back(b[p]);
			}
			
		}
		cout<<"v:   ";
			for(p=0;p<v.size();p++){
				cout<<v[p]<<" ";
			}
			cout<<endl;
		for(p=0;p<v.size();p++)
			arr[p]=v[p];
		n=v.size();
		v.clear();
	}
	for(i=0;i<n;i++)
		cout<<arr[i]<<" ";
	cout<<endl;
}
