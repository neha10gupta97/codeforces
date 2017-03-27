#include<bits/stdc++.h>
using namespace std;
main(){
	int arr[3]={1,2,3};
	vector <int> x(arr,arr+3);
	x.erase(x.begin());
	for(int i=0;i<x.size();i++)
		cout<<x[i]<<" ";
}
	
	
