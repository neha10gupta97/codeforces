#include<iostream>
using namespace std;

main(){
	string str;
	cin>>str;
	int n=str.length();
	int flag=0;
	if(str.length()>1){
		for(int i=1;i<n;i++){
			if(str[i]>96){	
				flag=0;
				break;
			}
			else
				flag=1;
		}
	}
	else
		flag=1;
	if(flag==1){
		for(int i=0;i<n;i++){
			if(str[i]<96)
				str[i]+=32;
			else if(str[i]>96)
				str[i]-=32;
		}
	}
	cout<<str<<endl;
}
			
