#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T)
	{
	    int n,x,k;
	    cin>>n>>x>>k;
	    vector<int>arr(n);
	    for(int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr.begin(),arr.end());
	    reverse(arr.begin(),arr.end());
	    int cl=1;
	    int ele=arr[0];
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(k>0 && ele==arr[i])
	        {
	            if(count<x)
	            count++;
	        }
	        else if(ele != arr[i])
	        {
	            k--;
	            if(k>0)
	            {
	                ele=arr[i];
	                if(count<x)
	                count++;
	            }
	            else
	            break;
	        }
	    }
	    
	    cout<<count<<endl;
	    
	    
	    T--;
	}

}
