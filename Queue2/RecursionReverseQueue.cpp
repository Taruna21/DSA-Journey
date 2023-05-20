#include<iostream>
#include<queue>
#include<stack>
using namespace std;

//gfg
void ReverseQueueRecursion(queue<int> &q){
    if(q.empty()){
        return;
    }
    
    int element = q.front();
    q.pop();
    
    ReverseQueueRecursion(q);
    q.push(element);
    
    
    
    
}

queue<int> rev(queue<int> q)
{
    // add code here.
    ReverseQueueRecursion(q);
    return q;
}

//gfg