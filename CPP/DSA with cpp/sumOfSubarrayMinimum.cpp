//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

const int mod = 1e9+7;
class Solution {
  public:
    int sumSubarrayMins(int N, vector<int> &arr) {
        // code here
        stack<int>st;
        vector<pair<int,int>> boundary(N);
        for(int i=0;i<N;i++)
        {
            boundary[i].first=i+1;
            boundary[i].second = N-i;
        }
        for(int i=0;i<N;i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            {
                boundary[st.top()].second=i-st.top();
                st.pop();
            }
            st.push(i);
        }
        st = stack<int>();
        for(int i=N-1;i>=0;i--)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
            {
                boundary[st.top()].first=st.top()-i;
                st.pop();
            }
            st.push(i);
        }
        int ans=0;
        for(int i=0;i<N;i++){
             ans+=arr[i]*((long long)(boundary[i].first)*(boundary[i].second))%mod;
            ans%=mod;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        cout << obj.sumSubarrayMins(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends