//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B) {
        // code here
        if (A == 0) return {0,B};
        if (B== 0) return {0,A};
        
        vector<long long > ans;
        long long a = A;
        long long b = B;
        while(A>0 && B>0){
            if(A>B){
                A = A-B;
            }
            else{
                B = B-A;
            }
        }
        long long gcd = A==0?B:A;
        long long lcm = (a*b)/gcd;
        ans.push_back(lcm);
        ans.push_back(gcd);
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends