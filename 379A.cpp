#include<iostream>
using namespace std;
main(){
	int a,b;
	cin>>a>>b;
	int t=0;
	t+=a;
	while(a>=b){	
		t+=a/b;
		a=a/b+a%b;
	}
	cout<<t<<endl;
}
