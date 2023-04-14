//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int A[], int n, int K) {
// 	    // code here
// 	    int total = -1;
// 	   // auto lower = lower_bound(arr,arr+n,x);
// 	   // int first = lower - arr;
// 	    auto upper = upper_bound(arr,arr+n,x);
// 	    int last = upper - arr;
	    
// 	   // total = last - first ;
// 	    return last;

         return upper_bound(A,A+n,K)-lower_bound(A,A+n,K);
	    
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends