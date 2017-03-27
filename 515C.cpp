#include<bits/stdc++.h>
using namespace std;
main(){
	long long int n,a,i;
	vector <char> v;
	cin>>n;
	char num;
	for(i=0;i<n;i++){
		cin>>num;
		if(num=='2'||num=='3'||num=='5'||num=='7')
			v.push_back(num);
		else if(num=='4'){
			v.push_back('3');
			v.push_back('2');
			v.push_back('2');
		}
		else if(num=='6'){
			v.push_back('5');
			v.push_back('3');
		}
		else if(num=='8'){
			v.push_back('7');
			v.push_back('2');
			v.push_back('2');
			v.push_back('2');
		}
		else if(num=='9'){
			v.push_back('7');
			v.push_back('3');
			v.push_back('3');
			v.push_back('2');
		}
	}
		sort(v.begin(),v.end());
		reverse(v.begin(),v.end());
		for(i=0;i<v.size();i++)
			cout<<v[i];
		cout<<endl;
	
}
