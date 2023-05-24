#include<iostream>
using namespace std;
#include<queue>

int main(){
    priority_queue<int>pq;
    pq.push(10);
    pq.push(3);
    pq.push(5);

    cout<<pq.top();
    pq.pop();

    return 0;

}