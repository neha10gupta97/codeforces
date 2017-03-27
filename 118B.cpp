#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i,j;
	cin>>n;
	for(i=0;i<2*n+1;i++){
		for(j=0;j<abs(n-i);j++)
			cout<<" "<<" ";
		for(j=0;j<=n-abs(n-i);j++){
			cout<<j;
			if(i!=0&&i!=2*n)
				cout<<" ";
		}
		for(j=n-abs(n-i)-1;j>=0;j--){
			cout<<j;
			if(j!=0)
				cout<<" ";	
		}	
		cout<<endl;
	}
}
