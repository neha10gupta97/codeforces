#include<bits/stdc++.h>
using namespace std;
main(){
	int n;
	cin>>n;
	int arr[n+1]={0};
	int x,total=0,max=0;
	n=n*2;
	while(n--){
		cin>>x;
		if(arr[x]==0){
			arr[x]=1;
			total++;
		}
		else{
			arr[x]=0;
			total--;
		}
		if(max<total)
			max=total;
	}
	cout<<max;
}
			
