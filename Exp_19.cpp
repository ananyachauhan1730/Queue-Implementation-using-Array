#include <iostream>
using namespace std;

#define SIZE 5
#define ERROR -9999

class Queue {
    int rear, front, arr[SIZE];

public:
    Queue() {
        rear = -1;
        front = -1;
    }

    void enqueue(int num) {
        if (rear == SIZE - 1) {
            cout << "Queue is full" << endl;
        } else {
            if (front == -1) {
                front = 0;
            }
            arr[++rear] = num;
        }
    }

    int dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return ERROR;
        } else {
            int val = arr[front++];
            return val;
        }
    }

    void disp() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue q1;

    q1.enqueue(4);
    q1.enqueue(8);
    q1.enqueue(3);

    q1.disp();

    int val = q1.dequeue();
    if (val != ERROR) {
        cout << "Deleted element: " << val << endl;
    }

    q1.disp();

    return 0;
}
