#include<iostream>
using namespace std;
main(){
	int n;
	cin>>n;
	int r=1;
	while(r*5<n){
		n-=r*5;
		r*=2;
	}
	string name[]={"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	cout<<name[(n-1)/r]<<endl;
}
