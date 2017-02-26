#include<iostream>
using namespace std;
int arr[]={4,7,47,74,444,447,474,477,744,747,774,777};
int s=sizeof(arr)/sizeof(arr[0]);
main(){
	int n;
	cin>>n;
	for(int i=0;i<s;i++){
		if(n%arr[i]==0){
			cout<<"YES"<<endl;
			return 0;
		}
	}
	cout<<"NO"<<endl;
}

