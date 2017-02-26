#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std;
main(){
	int n,m;
	cin>>n>>m;
	int arr[m];
	for(int i=0;i<m;i++)
		cin>>arr[i];
	sort(arr,arr+m);
	int minDiff=1000;
	for(int i=0;i<=m-n;i++)
		minDiff=min(minDiff,(arr[i+n-	1]-arr[i]));

	cout<<minDiff<<endl;
}
			
	
	
