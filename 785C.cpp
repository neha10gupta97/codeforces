#include<bits/stdc++.h>
using namespace std;
main(){
	long long int n,m;
	cin>>n>>m;
	long long int total=n,sp=1,days=1;
	while(1){
		
		if(total>n)
			total=n;
		total-=sp;
		
		if(total<=0){
			cout<<days<<endl;	
			return 0;
		}
		sp++;
		total+=m;
		days++;
	}
}
