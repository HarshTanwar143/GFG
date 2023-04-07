//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        // // FIRST METHOD
        // for(auto &i : matrix){
        //     reverse(i.begin(),i.end());
        // }
        // reverse(matrix.begin(),matrix.end());
        
        
        
        
        // SECOND METHOD
        // Rotate matrix by 90 degree first
        for(int i = 0;i<matrix.size();i++){
            for(int j = 0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        int N = matrix.size();
        for(int i = 0;i<N/2;i++){
            for(int j = 0;j<N;j++){
                swap(matrix[i][j],matrix[N-i-1][j]);
            }
        }

        // Rotate matrix by 90 degree Again
        for(int i= 0;i<matrix.size();i++){
            for(int j = 0;j<i;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i = 0;i<N/2;i++){
            for(int j = 0;j<N;j++){
                swap(matrix[i][j],matrix[N-i-1][j]);
            }
        }
        
        
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>> matrix(n, vector<int>(n,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		ob.rotate(matrix);
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++)
				cout << matrix[i][j] <<" ";
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends