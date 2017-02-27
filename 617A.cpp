#include<iostream>
using namespace std;
main(){
	int n,x;
	cin>>n;
	if(n%5==0)
		x=n/5;
	else
		x=n/5+1;
	cout<<x<<endl;
}

