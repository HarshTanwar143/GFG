//{ Driver Code Starts
// Initial template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template in C++

class Solution 
{
    public:
    
    bool isPossible(int arr[],int N , int M , int sol){
        int c = 1;
        int PageSum = 0;
        
        for(int i = 0;i<N;i++){
            if(arr[i] > sol) {
                return false;
            }
            
            if(PageSum + arr[i] > sol){
                ++c;
                PageSum = arr[i];
                if(c > M){
                    return false;
                }
            }
            
            else {
                PageSum += arr[i];
            }
        }
        return true;
    }
    
    
    //Function to find minimum number of pages.
    int findPages(int arr[], int N, int M) 
    {
        //code here
        if(M>N) return -1;
        
        int s = 0;
        int e = accumulate(arr,arr+N,0);
        int ans = -1;
        
        while(s<=e){
            int mid = s+(e-s)/2;
            if(isPossible(arr,N,M,mid)){
                ans = mid;
                e = mid-1;
            }
            
            else{
                s = mid+1;
            }
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int A[n];
        for(int i=0;i<n;i++){
            cin>>A[i];
        }
        int m;
        cin>>m;
        Solution ob;
        cout << ob.findPages(A, n, m) << endl;
    }
    return 0;
}

// } Driver Code Ends