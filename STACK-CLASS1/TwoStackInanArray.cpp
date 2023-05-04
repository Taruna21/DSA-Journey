#include <iostream>
using namespace std;
#include <stack>

class Stack{
    public:
    int *arr;
    int top1;
    int top2;
    int size;

    Stack(int size){
        arr = new int[size];
        this -> size =size;
        top1 =-1;
        top2 = size;
    }

    void push1(int data){
        if(top2-top1==1){
            cout<<"overflow"<<endl;
        }
        else{
            top1++;
            arr[top1] = data;
        }
    }
    void pop1(){
        if(top1==-1){
            cout<<"overflow"<<endl;
        }
        else{
            top1--;
        }
    }
    void push2(int data){
        if(top2-top1==1){
            cout<<"overflow"<<endl;
        }
        else{
            top2--;
            arr[top2]= data;
        }
    }

    void pop2(){
        if(top2==size){
            cout<<"underflow"<<endl;

        }
        else{
            top2--;
        }
    }

    

};

int main() {
        Stack s(10);

        s.push1(10);
      
        s.push1(20);
      
        s.push1(30);
      
        s.push1(40);
      
        s.push1(50);
      

        s.push2(100);
       
        s.push2(110);
      
        s.push2(120);
       
         s.push2(130);
       
        s.push2(140);
       
        
        s.pop1();
       
        s.pop1();
       


  return 0;
}
