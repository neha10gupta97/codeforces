#include<bits/stdc++.h>
using namespace std;
main(){
	int b,g,i,j;
	cin>>b;
	int barr[b];
	for(i=0;i<b;i++)
		cin>>barr[i];
	cin>>g;
	int garr[g];
	for(i=0;i<g;i++)
		cin>>garr[i];
	vector <int> boys(barr,barr+b);
	vector <int> girls(garr,garr+g);
	int pair=0;
	sort(boys.begin(),boys.end());
	sort(girls.begin(),girls.end());
	//cout<<"f"<<endl;
	for(i=0;i<boys.size();i++){
		for(j=0;j<girls.size();j++){
			if(abs(boys[i]-girls[j])<=1){
				pair++;
				//cout<<pair<<" "<<boys[i]<<" "<<girls[j]<<endl;
				girls.erase(girls.begin()+j);
				break;
			}
		}
	}
	cout<<pair<<endl;
}
