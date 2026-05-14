#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,m;
	    cin>>n>>m;
	    vector<int>arr;
	    int x,y;
	    if(n%3 != 2)
	    {
	    cout<<-1<<endl;
	    continue;
	    }
	    else
	    {
	        if(n==2)
	        {
	            arr.push_back(1);
	            arr.push_back(1);
	        }
	        else
	        {
	            
	            if(m%2 == 0)
	            {
	                x=y=m/2;
	            }
	            else
	            {
	                x=m/2;
	                y=(m/2) +1;
	            }

	            for(int j=0;j<n;j=j+6)
	            {
	                arr.push_back(x);
	                arr.push_back(x);
	                arr.push_back(0);
	                arr.push_back(y);
	                arr.push_back(y);
	                arr.push_back(0);
	            }
	            
	            
	        }
	    }
	    
	    for(int i=0;i<n;i++)
	    {
	        cout<<arr[i]<<" ";
	    }
	    cout<<""<<endl;
	}

}
