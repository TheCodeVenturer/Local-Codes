//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
        int l=0,r=n-1,leftMax=0,rightMax=0;
        long long sum=0;
        while(l<=r)
        {
            if(arr[l]<=arr[r])
            {
                if(arr[l]>leftMax)leftMax=arr[l];
                else sum += leftMax-arr[l];
                l++;
            }
            else{
                if(arr[r]>=rightMax)rightMax=arr[r];
                else sum += rightMax-arr[r];
                r--;
            }
        }
        return sum;
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends