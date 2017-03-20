#include<iostream>
using namespace std;
main(){
	int n,i;
	cin>>n;
	string str;
	cin>>str;
	int arr[26]={0};
	if(n<26){
		cout<<"NO"<<endl;
		return 0;
	}
	else{
		for(i=0;i<n;i++){
			if(str[i]<97)
				str[i]+=32;
			arr[str[i]-97]=1;
		}
	}
	for(i=0;i<26;i++){
		if(arr[i]==0){
			cout<<"NO"<<endl;
			return 0;
		}
	}
	cout<<"YES"<<endl;
}
