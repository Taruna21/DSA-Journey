#include<iostream>
using namespace std;

class Node {
    public:
    int data;
    Node * left;
    Node * right;

    Node(int data){
        this -> data = data;
        left = NULL;
        right = NULL;

    }
};


Node * buildTree(){

    int data;
    cout << "Enter the data"<<endl;
    cin >> data;

    if(data ==-1){
        return NULL;
    }

    Node* root = new Node(data);
    root -> left = buildTree();
    root-> right = buildTree();

    return root;
}

int main(){
    Node* root = NULL;
    root = buildTree();
    cout
    return 0;


}