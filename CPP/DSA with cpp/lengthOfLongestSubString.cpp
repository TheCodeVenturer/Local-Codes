//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
        int maxi=0;
        int size=s.size();
        vector<int>charMap(26,-1); // replace 26 with 128 for Leetcode Case
        for(int i=0,j=0;i<size;i++)
        {
            if(charMap[s[i]-'a']!=-1)
                j = max(j,charMap[s[i]-'a']+1);
            maxi = max(i-j+1,maxi);
            charMap[s[i]-'a']=i;
            if(maxi==26)return maxi;
        }
        return maxi;
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends