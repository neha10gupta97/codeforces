#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
main(){
	string str,str1,str2;
	cin>>str>>str1>>str2;
	str+=str1;
	sort(str.begin(),str.end());
	sort(str2.begin(),str2.end());
	if(str==str2)
		cout<<"YES"<<endl;
	else
		cout<<"NO"<<endl;
}

