#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	int count=0;
	while(n>0&&m>0){
		if(n<m){
			n--;
			m-=2;
		}
		else{
			m--;
			n-=2;
		}
		count++;
	}
	if(n<0||m<0){
		cout<<count-1<<endl;
		return 0;
	}
	cout<<count<<endl;
}			
