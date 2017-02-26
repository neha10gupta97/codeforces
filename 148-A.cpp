#include<iostream>
using namespace std;

int main()
{
      int k,l,m,n = 0;
      int d;
      cin>>k>>l>>m>>n>>d;
      int count = 0;
      for(int j=1;j<=d;j++)
      {
      	if(j%k==0||j%l==0||j%m==0||j%n==0){
		//cout<<"j "<<j<<endl;                  
		count++;
	}
      }
      cout<<count;
      return 0;
      
}
