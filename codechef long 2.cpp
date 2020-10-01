#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int t;
	cin>>t;
	while(t--)
	{
		long long int n,k,c=999999999,p;
		cin>>n>>k;
		int arr[n];
		for(int i=0;i<n;i++)
		  cin>>arr[i];
		  long long int ans=1;
		for(int i=0;i<n;i++)
		  {
		  	if(k>=arr[i] && k%arr[i]==0)
		    {
		       if(c>(k/arr[i]))
			    {
				 c=k/arr[i];
				 p=i;
		         ans=0;
			     }
		
		      }
		  }
		  if(ans==0)
		  cout<<arr[p]<<endl;
		  else 
		  cout<<"-1"<<endl;
		
	}
}
