#include<bits/stdc++.h>
using namespace std;

const int MAX_SIZE = 100000;
int a[MAX_SIZE];
int front = -1;
int end1 = -1; // Renamed end to end1

void insert(int n) {
    if ((front == 0 && end1 == n - 1) || (end1 == front - 1)) {
        cout << "Can't insert because queue is full\n";
        return;
    }
    int p;
    cout << "Enter the element: ";
    cin >> p;
    if (front == -1) {
        front = 0;
        end1 = 0;
    } else if (end1 == n - 1) {
        end1 = 0;
    } else {
        end1++;
    }
    a[end1] = p;
}

void delete_element(int n) {
    if (front == -1) {
        cout << "Queue underflow\n";
        return;
    }
    cout << "Deleted element: " << a[front] << endl;
    if (front == end1) {
        front = -1;
        end1 = -1;
    } 
    else if (front == n - 1) {
        front = 0;
    } 
    else {
        front++;
    }
}

void display(int n) {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }
    cout << "Queue elements: ";
    if (end1 >= front) {
        for (int i = front; i <= end1; i++) {
            cout << a[i] << " ";
        }
    } 
    else {
        for (int i = front; i < n; i++) {
            cout << a[i] << " ";
        }
        for (int i = 0; i <= end1; i++) {
            cout << a[i] << " ";
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter the size of the queue: ";
    cin >> n;
    while (true) {
        cout << "\n1. Insert element\n2. Delete element\n3. Display\n4. Exit\n";
        cout << "Which operation do you want to execute: ";
        int x;
        cin >> x;
        if (x == 1) {
            insert(n);
        } 
        else if (x == 2) {
            delete_element(n);
        } 
        else if (x == 3) {
            display(n);
        }
        else if (x == 4) {
            return 0;
        }
    }
    return 0;
}
