#include <iostream>
#include<vector>
#include<limits.h>
#include<stack>
using namespace std;


class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int>st;
        int maxlen =0;
        st.push(-1);
        for(int i=0;i<s.length();i++)
        {
        char ch = s[i];
        
        if(ch == '(' ){
            st.push(i);
        }
        else{
            st.pop();
            if(st.empty()){
                st.push(i);
            }
            else{
                int len = i - st.top();
                maxlen = max(len,maxlen);
            }
           
        }
        }
        return maxlen;
    }

};

// } Driver Code Ends
// Driver code
//int main()
//{

    //string s = "((()()";
   
    // Function 
 
   
   
    // Function call
   // cout << longestValidParentheses(s) << endl;
 
//    return 0;
//};