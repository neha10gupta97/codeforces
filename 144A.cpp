#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int arr[n];
	int i;
	for(i=0;i<n;i++)	
		cin>>arr[i];
	int max=0;
	int min=0,swap=0,index_min=0,index_max=0;
	for(i=0;i<n;i++){
		if(arr[max]<arr[i]){
			max=i;
			index_max=i;
		}
	}
	//cout<<swap<<endl;
	for(i=0;i<n;i++){
		if(arr[min]>=arr[i]){
			min=i;
			index_min=i;
		}
	}
	//cout<<index_max<<" "<<index_min<<endl;
	swap=index_max+(n-1-index_min);
	if(index_max>index_min)
		swap-=1;
	cout<<swap<<endl;
}
