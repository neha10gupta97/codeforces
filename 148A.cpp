#include<iostream>
using namespace std;

main(){
	int k,l,m,n,d;
	cin>>k>>l>>m>>n>>d;
	int count=0;
	for(int i=1;i<=d;i++){
		if(i%k==0)
			continue;
		else if(i%l==0)
			continue;
		else if(i%m==0)
			continue;
		else if(i%n==0)
			continue;
		else
			count+=1; 
	}
	cout<<d-count<<endl;
}
