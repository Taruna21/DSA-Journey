#include<iostream>
using namespace std;

class CircularQueue
{

public:
int size;
int front;
int rear;
int *arr;

CircularQueue(int size){
    this-> size = size;
    front = -1;
    rear = -1;
    arr = new int[size];
}

void push(int data){
    //queue full
    if(front == 0 && rear == size-1){
        cout<<"q is full"<<endl;
    }

    else if(front = -1){
        front = rear = 0;
        arr[rear] = data;

    }

    else if(rear = size-1 && front !=0){
        rear = 0;
        arr[rear] = data;
    }

    else{
        rear++;
        arr[rear] == data;
    }
    
}

void pop(){
    //empty
    //single
    //circular
    //normal flow

    if(front == -1){
        cout<<"Q is empty, cannot pop"<<endl;
    }
    else if(front ==  rear ){
        arr[front] = -1;
        front = -1;
        rear = -1;
    }
    else if(front = size-1 ){
        front = 0;
    }

    else{
        front++;
    }
}

    
    

};