#include <iostream>
#include <stack>
using namespace std;
 
void insertSorted(stack<int>&s , int target){
    //base case
    if(s.empty()) {
        s.push(target);
        return;
    }
    if(s.top() >= target){
        s.push(target);
        return;
    }
    int topElement = s.top();
    s.pop();
    insertSorted(s, target);

    //bt
    s.push(topElement);
    
}

void sortStack(stack<int>&s){
    //base case
    if(s.empty()){
        return;
    }
    int topElement = s.top();
    s.pop();

    sortStack(s);
    insertSorted(s,topElement);
    
}

int main(){
    stack<int>s;
    s.push(1);
    s.push(7);
    s.push(8);
    s.push(6);


    sortStack(s);

    while(!s.empty()) {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout <<endl;


    return 0;
    
}                                                                     