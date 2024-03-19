#include<bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node* next, *previous;
};

void display_linked_list(node* head) {
    while (head != 0) {
        cout << head->previous << " " << head->data << " " << head << " " << head->next << endl;
        head = head->next;
    }
}

int main() {
    node* head = 0, *tail = 0, *temp, *track;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        temp = new node();
        temp->data = x;
        temp->next = 0; // Initialize next pointer to null

        if (head == 0) {
            temp->previous = 0; // Initialize previous pointer to null for the first node
            head = temp;
        }
        else {
            tail->next = temp;
            temp->previous = tail;
        }
        tail = temp;
    }

    display_linked_list(head);

    return 0;
}
