#include<iostream>
#include<string>
#include<stack>
#include<stdio.h>
#include<limits.h>
#include<algorithm>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char>st;
        string s1 = "";
        int n = s.length();
        for(int i = 0; i<n ; i++){
            if(s[i] >= 'a' && s[i] <= 'z' ){
                st.push(s[i]);
                
            }
            
            if(s[i] == '*'){
               
                st.pop();
                
            }
            
        }
        while(!st.empty()){
            s1.push_back(st.top());
           
            st.pop();
        }
        reverse(s1.begin(),s1.end());
        return s1;
    }
};