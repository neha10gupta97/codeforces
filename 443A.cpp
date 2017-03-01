#include<iostream>
using namespace std;
main(){
	char str;
	cin>>str;
	cin>>str;
	int i;
	int arr[26]={0};
	while(str!='}'){
		if(str!=',')
			arr[str-97]=1;
		cin>>str;
	}
	
	int count=0;
	for(i=0;i<26;i++){
		if(arr[i]==1)
			count+=1;
	}
	cout<<count<<endl;
}
