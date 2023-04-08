//{ Driver Code Starts
#include <bits/stdc++.h>


using namespace std;




// } Driver Code Ends

class Solution{
  public:
    int Countpair(int arr[], int n, int sum){
        
        // Complete the function
        int count = 0;
        int l = 0,h = n-1;
        // int h = n-1;
        
        
        while(l<h){
            int x = arr[l] + arr[h];
            if(x == sum){
                count++;
                l++,h--;
            }
            
            else if(x>sum){
                h--;
            }
            
            else{
                l++;
            }
        }
        if(count == 0) return -1;
        
        return count;
    
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        
        int n;
        cin>>n;
        int arr[n+1];
        
        for(int i=0;i<n;i++)
        cin>>arr[i];

        int sum;
        cin>>sum;
        Solution obj;
        cout << obj.Countpair(arr, n, sum) << endl;
        
    }
	return 0;
}

// } Driver Code Ends