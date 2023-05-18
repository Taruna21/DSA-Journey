#include <iostream>
using namespace std;

class CircularQueue
{
public:
    int size;
    int front;
    int rear;
    int *arr;

    CircularQueue(int size)
    {
        this->size = size;
        front = -1;
        rear = -1;
        arr = new int[size];
    }

    void push(int data)
    {
        // queue full
        if ((front == 0 && rear == size - 1) || (rear == front - 1))
        {
            cout << "Queue is full" << endl;
        }
        // queue empty
        else if (front == -1)
        {
            front = rear = 0;
            arr[rear] = data;
        }
        // circular case
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        // normal flow
        else
        {
            rear++;
            arr[rear] = data;
        }
    }

    void pop()
    {
        // empty queue
        if (front == -1)
        {
            cout << "Queue is empty, cannot pop" << endl;
        }
        // single element
        else if (front == rear)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        // circular case
        else if (front == size - 1)
        {
            front = 0;
        }
        // normal flow
        else
        {
            front++;
        }
    }

    void print()
    {
        if (front == -1)
        {
            cout << "Queue is empty" << endl;
            return;
        }

        cout << "Queue elements: ";
        int i = front;
        if (front <= rear)
        {
            while (i <= rear)
            {
                cout << arr[i] << " ";
                i++;
            }
        }
        else
        {
            while (i < size)
            {
                cout << arr[i] << " ";
                i++;
            }
            i = 0;
            while (i <= rear)
            {
                cout << arr[i] << " ";
                i++;
            }
        }
        cout << endl;
    }
};

int main()
{
    CircularQueue q(10);
    q.print();

    q.push(5);
    q.print();
    q.push(15);
    q.print();
    q.push(25);
    q.print();
    q.push(55);
    q.print();
    q.pop();
    q.print();
    return 0;
}
