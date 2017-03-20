#include<bits/stdc++.h>
using namespace std;
main(){
	int n,m,i,j;
	cin>>n;
	long long int max=0;
	long long int narr[n],narr1[n];
	for(i=0;i<n;i++){
		cin>>narr[i];
		cin>>narr1[i];
	}
	sort(narr,narr+n);
	sort(narr1,narr1+n);
	cin>>m;
	long long int marr[m],marr1[m];
	for(i=0;i<m;i++){
		cin>>marr[i];
		cin>>marr1[i];
	}
	sort(marr,marr+m);
	sort(marr1,marr1+m);
	long long int y=marr[m-1]-narr1[0];
	long long int y1=narr[n-1]-marr1[0];
	if(y>max)
		max=y;
	if(y1>max)
		max=y1;
	cout<<max<<endl;
}	
