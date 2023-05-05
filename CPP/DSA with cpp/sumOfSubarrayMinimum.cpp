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
        int size = arr.size();
        arr.insert(arr.begin(),0);
        vector<long long> result(size,0);
        st.push(0);
        for(int i=1;i<size;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
                st.pop();
            int j = st.top();
            result[i] = result[j] + arr[i]*(i-j);
            st.push(i);
        }
        long long mini=0;
        for(long long &num:result)
            mini = (mini + num)%mod;
        return mini%mod;
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