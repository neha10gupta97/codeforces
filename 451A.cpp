#include<iostream>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	int x=n*m;
	int count=0;
	while(x>0){
		count+=1;
		n=n-1;m=m-1;
		x=n*m;
	}
	if(count%2==0)
		cout<<"Malvika"<<endl;
	else
		cout<<"Akshat"<<endl;
}		
