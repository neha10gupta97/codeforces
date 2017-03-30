#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],i;
    for(i=0;i<n;i++)
        cin>>a[i];
    int sum=0;
    for(i=0;i<k;i++)
        sum = sum+a[i];
    int summ = sum;
    int index=1;
    i=0;

    while(1){
        
        if(sum<summ)
        {
            summ=sum;
            index =i+1;
        }
         if(i+k>=n)
            break;   
        sum = sum + a[i+k]-a[i];
	
        i++;
	
    }
    if(k==n)
        cout<<1<<endl;
    else
        cout<<index<<endl;
}
