//{ Driver Code Star
#include<iostream>
#include<algorithm>

using namespace std;

// } Driver Code Ends
// Your c

class Solution {
public:
    void sortedMerge(int a[], int b[], int res[], int n, int m) {
        sort(a, a+n);
        sort(b, b+m);
        int i = 0; // index for array a
        int j = 0; // index for array b
        int k = 0; // index for array res
        
       while(i<n && j<m){
           if(a[i]<=b[j]){
               res[k] = a[i];
               i++;
            
               k++;
               
           }
           
           else{
               res[k] = b[j];
            
               j++;
               k++;
           }
           
       }
         while (i < n) {  // Merging remaining
                     // elements of a[] (if any)
        res[k] = a[i];
        i += 1;
        k += 1;
    }   
    while (j < m) {   // Merging remaining
                     // elements of b[] (if any)
        res[k] = b[j];
        j += 1;
        k += 1;
           
           
       
       }
    }
};



//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n, m;
	    cin >> n >> m;
	    int a[n], b[m];
	    for(int i = 0;i<n;i++){
	        cin >> a[i];
	    }

	    for(int i = 0;i<m;i++){
	        cin >> b[i];
	    }
	    
	    int res[n+m];

      
        Solution ob;
        ob.sortedMerge(a,b,res,n,m);

        for(int i = 0;i<n+m;i++){
	        cout << res[i] << " ";
	    }
	   
        
	    cout << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends