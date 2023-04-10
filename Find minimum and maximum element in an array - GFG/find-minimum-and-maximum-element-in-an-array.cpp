//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;
#define ll long long

pair<long long, long long> getMinMax(long long a[], int n) ;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        ll a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        pair<ll, ll> pp = getMinMax(a, n);

        cout << pp.first << " " << pp.second << endl;
    }
    return 0;
}
// } Driver Code Ends


pair<long long, long long> getMinMax(long long a[], int n) {
    pair<long long,long long> ans;
    long long mx = INT_MIN;
    long long mn = INT_MAX;
    
    for(long long i = 0;i<n;i++){
        if(mx<a[i]){ mx = a[i]; }
        if(mn>a[i]){ mn = a[i]; }
    }
    
    ans = {mn,mx};
    return ans;
    
}