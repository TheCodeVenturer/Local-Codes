//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string S, int k) {
        string st="";
        for(char &ch:S)
        {
            while(st.size()>0 && st.back()>ch && k>0){
                st.pop_back();
                k--;
            }
            st.push_back(ch);
        }
        while(k--)st.pop_back();
        int i=0;
        while(i<st.length() && st[i]=='0')i++;
        st = st.substr(i);
        return st.size()?st:"0";
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends