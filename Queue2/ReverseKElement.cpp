#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void ReverseKElement(queue<int> &q, int k){
    stack<int>s;
    int count =0;
    int n = q.size();

    if(k==0 || k > n){
        return;
    }

    while(!q.empty()){
        int element = q.front();
        q.pop();

        s.push(element);

        count++;
        if(count == k){
            break;
        }

    }

    while(!s.empty() && n-k !=0){
        int element = s.top();
        s.pop();

        q.push(element);

    }

    count = 0;
    while(!q.empty() && n-k!=0){
        int element = q.front();
        q.pop();

        q.push(element);
        count++;

        if(count == n-k){
            break;
        }
    }
};


int main() {
  queue<int> q;
  q.push(1);
  q.push(2);
  q.push(3);
  q.push(4);
  q.push(5);
  q.push(6);
  q.push(7);
  q.push(8);
  q.push(9);

    ReverseKElement(q, 6);


    
  cout << "printing Queue after reversing recursively" << endl;
  while(!q.empty()) {
          cout << q.front() << " ";
          q.pop();
  }
  cout << endl;
}