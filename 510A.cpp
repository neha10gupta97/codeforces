#include<iostream>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	int i,j;
	int y=m-1;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			//cout<<y<<endl;
			if(i%2==0)
				cout<<"#";
			else if(j==y)
				cout<<"#";
			else
				cout<<".";
		}
		if((i/2)%2==0)
			y=m-1;
		else
			y=0;
		cout<<endl;
	}
}
