#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int room=0;
	while(n>0){
		int p,q;
		cin>>p>>q;
		if((q-p)>=2)
			room+=1;
		n-=1;
	}
	cout<<room<<endl;
}
