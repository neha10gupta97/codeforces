#include<iostream>
using namespace std;
main(){
	string str;
	cin>>str;
	int n=str.length();
	string str1;
	int i,k=0;
	int flag=0;
	for(i=0;i<n-3;i++){
		//cout<<str[i]<<" ";
		if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
			i+=2;
			if(flag==1)			
				cout<<" ";
		}
		else{
			cout<<str[i];
			flag=1;
		}
			
	}
	//cout<<"i: "<<i<<endl;
	if(i+2<n){
		if(str[i]=='W'&&str[i+1]=='U'&&str[i+2]=='B'){
			
		}
		else{
			cout<<str[i];
		
			cout<<str[i+1];
		
			cout<<str[i+2];
		}
	}
	else if(i+2>=n&&i+1<n){
		//cout<<"herE";
		cout<<str[i];
		
			cout<<str[i+1];
		}
	else
		cout<<str[i];
		
	//cout<<str1<<endl;
}
