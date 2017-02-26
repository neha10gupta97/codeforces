#include<iostream>
using namespace std;
main(){
	string str;
	cin>>str;
	int n=str.length();
	for(int i=0;i<n;i++){
		//cout<<str[i]<<endl;
		if(str[i]=='H'||str[i]=='Q'||str[i]=='9'){
		cout<<"YES"<<endl;
		return 0;
		}
	}
	cout<<"NO"<<endl;
}
