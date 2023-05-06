//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find largest rectangular area possible in a given histogram.
    long long getMaxArea(long long arr[], int n)
    {
        // Your code here
        long long maxi=0;
        stack<int>st;
        for(int i=0;i<=n;i++)
        {
            while(!st.empty() && (i==n || arr[st.top()]>=arr[i]))
            {
                int height = arr[st.top()];
                st.pop();
                int width=i;
                if(!st.empty())width = i-st.top()-1;
                maxi = max(maxi,(long long)height*width);
            }
            st.push(i);
        }
        return maxi;
    }
};


//{ Driver Code Starts.

int main()
 {
    long long t;

    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        
        long long arr[n];
        for(int i=0;i<n;i++)
            cin>>arr[i];
        Solution ob;
        cout<<ob.getMaxArea(arr, n)<<endl;
    
    }
	return 0;
}

// } Driver Code Ends