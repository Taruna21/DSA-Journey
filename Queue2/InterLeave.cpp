#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void Interleave(queue<int>&q){
    int n = q.size();
    int k = n/2;
    int count = 0;
    queue<int>q1;

    if(q.empty()){
        return;
    }

    while(!q.empty()){
        int element = q.front();
        q.pop();

        q1.push(element);
        count++;

        if(count == k){
            break;
        }

    }

    while(!q.empty() && !q1.empty() ){
        int element = q1.front();
        q1.pop();
        q.push(element);
        int element1 = q.front();
        q.pop();
        q.push(element1);

    }
    //odd case

    if(n&1){
        int ele = q.front();
        q.pop();
        q.push(ele);
    }




}


int main() {
  queue<int> q; 
  int n = 9;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  q.push(9);

    Interleave(q);


    
  cout << "printing Queue after reversing recursively" << endl;
  while(!q.empty()) {
          cout << q.front() << " ";
          q.pop();
  }
  cout << endl;
}