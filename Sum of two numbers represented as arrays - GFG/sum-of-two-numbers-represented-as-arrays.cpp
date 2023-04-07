//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	
	vector<int> findSum(vector<int> &a, vector<int> &b) {
	    // code here
	    int i = a.size()-1;
	    int j = b.size()-1;
	    
	    
	    vector<int> ans;
	    int carry = 0;
	    
	    
	    while(i>= 0 && j>=0){
	        int x ;
	        x = a[i] + b[j] + carry;
	        int digit = x%10;
	        ans.push_back(digit);
	        carry = x/10;
	        i--,j--;
	    }
	    
	    
	    while(i>=0){
	        int x = a[i] + 0 + carry;
	        int digit = x%10;
	        ans.push_back(digit);
	        carry = x/10;
	        i--;
	    }
	    
	    
	    while(j>=0){
	        int x ;
	        x = 0 + b[j] + carry;
	        int digit = x%10;
	        ans.push_back(digit);
	        carry = x/10;
	        j--;
	    }
	    
	    
	    if(carry){
	        ans.push_back(carry);
	    }
	    
	    
	    reverse(ans.begin(),ans.end());
	    return ans;
	    
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < m; i++) {
            cin >> b[i];
        }
        Solution ob;
        auto ans = ob.findSum(a, b);
        for (int i = 0; i < ans.size(); i++) {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends