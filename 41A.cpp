#include<iostream>
#include<string.h>
#include<algorithm>
using namespace std;
main(){
	string str,str1;
	cin>>str>>str1;
	reverse(str.begin(),str.end());
	//cout<<str<<endl;
	if(str.compare(str1)==0)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}
	
