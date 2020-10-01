#include<bits/stdc++.h>
using namespace std;
int remove_word(string s,string p)
{
	for(int i=0;i<p.size();i++)
	{
		size_t found = s.find(p[i]);
        if (found != string::npos) 
           s.erase(s.begin()+found);
        
	}
	
	
} 
int concatinate(string s,string p)
{
	int q=1;
	size_t found1=s.find(p[0]);
	for(int i=0;i<s.size();i++)
	{
		if(s[i]<=p[0] && q==1)
		 
		 cout<<s[i];
		else 
		{
		  q=0;
		  cout<<p;
		  i--;
	    }
	    if(q==0)
		  cout<<s[i];	
		
		
	
	}
	cout<<endl;
	
}

int main()
{
	
int t;
cin>>t;
while(t--)
{
  string s,p;
  cin>>s>>p;
  remove_word(s,p);
  sort(s.begin(),s.end());
  concatinate(s,p);
      
  	}	
	
}


