//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    long long subarrayRanges(int N, vector<int> &arr) {
        // code here
        arr.insert(arr.begin(),INT_MIN);
        int size = arr.size();
        vector<long long>result(size,0);
        stack<int>st;
        st.push(0);
        for(int i=1;i<size;i++)
        {
            while(!st.empty() && arr[st.top()]>arr[i])
                st.pop();
            int j = st.top();
            result[i] = result[j] + (long long)arr[i]*(i-j);
            st.push(i);
        }
        arr[0]=INT_MAX;
        st = stack<int>();
        st.push(0);
        long long mini = accumulate(result.begin(),result.end(),0);
        for(int i=1;i<size;i++)
        {
            while(!st.empty() && arr[st.top()]<arr[i])
                st.pop();
            int j = st.top();
            result[i] = result[j] + (long long)arr[i]*(i-j);
            st.push(i);
        }
        return accumulate(result.begin(),result.end(),0) - mini;
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
        cout << obj.subarrayRanges(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends