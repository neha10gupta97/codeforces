#include<bits/stdc++.h>
using namespace std;
main(){
	string s;
	cin>>s;
	int q,i;
	cin>>q;
	int arr[s.length()];
	arr[0]=0;
	for(i=1;i<s.length();i++)
		arr[i]=arr[i-1]+(s[i]==s[i-1]);
	while(q--){
		int l,r;
		cin>>l>>r;
		cout<<arr[r-1]-arr[l-1]<<endl;;
	}
}
