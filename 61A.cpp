#include<iostream>
using namespace std;
main(){
	string str,str1;
	cin>>str>>str1;
	int n=str.length();
	int i=0;
	string ans="";
	while(n>0){
		if(str[i]!=str1[i])
			cout<<"1";
		else
			cout<<"0";
		n-=1;
		i+=1;
	}
}
