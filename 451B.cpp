#include<bits/stdc++.h>
using namespace std;
main(){
	int n,i;
	cin>>n;
	int ori[n];
	vector <int> v;
	for(i=0;i<n;i++){
		cin>>ori[i];
		v.push_back(ori[i]);
	}
	sort(v.begin(),v.end());
	int start=-1,end=-1;
	for(i=0;i<n;i++){
		if(v[i]!=ori[i] &&start==-1){
			//cout<<"i "<<i<<endl;			
			start=i;
		}
		if(v[i]!=ori[i])
			end=i;
	}
	//cout<<start<<" "<<end<<endl;
	if(start==-1&&end==-1)
		cout<<"yes"<<endl<<"1 1"<<endl;
	else{
		int f=0;
		reverse(ori+start,ori+end+1);
		for(i=0;i<n;i++){
			if(v[i]!=ori[i]){
				f=1;
				break;
			}
		}
		if(!f){
		cout<<"yes"<<endl;
		cout<<++start<<" "<<++end<<endl;
		}
		else
			cout<<"no"<<endl;
	}
}			
		
