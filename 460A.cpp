#include<iostream>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	int i=0, day=0;
	while(n>0){
		i+=1;
		if(i%m==0)
			n+=1;
		n-=1;
		day+=1;
	}
	cout<<day<<endl;
}
