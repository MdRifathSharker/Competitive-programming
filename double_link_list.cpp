#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node *next, *previous;
};
void display_linked_list(node* head){
    while(head != 0){
        cout << head->previous << " " << head->data << " " << head << " " << head->next << endl;
        head = head->next;
    }
}
void insert_at_first_node(node* &head, int val){
    node *newNode = new node();
    newNode->data = val;
    newNode->next = head;
    newNode->previous = 0;
    if (head != 0)
        head->previous = newNode;
    head = newNode;
}
void insert_at_last_node(node* &head, int val){
    node *newNode = new node();
    newNode->data = val;
    newNode->next = 0;
    if (head == 0) {
        newNode->previous = 0;
        head = newNode;
        return;
    }
    node *temp = head;
    while (temp->next != 0) {
        temp = temp->next;
    }
    temp->next = newNode;
    newNode->previous = temp;
}
void insert_at_any_node(node* &head, int val, int position){
    if (position < 1) {
        cout << "Invalid position!" << endl;
        return;
    }
    if (position == 1) {
        insert_at_first_node(head, val);
        return;
    }
    node *newNode = new node();
    newNode->data = val;
    node *temp = head;
    for (int i = 1; i < position - 1 && temp != 0; i++) {
        temp = temp->next;
    }
    if (temp == 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    newNode->next = temp->next;
    if (temp->next != 0) {
        temp->next->previous = newNode;
    }
    temp->next = newNode;
    newNode->previous = temp;
}
void delete_first_node(node* &head){
    if (head == 0) {
        cout << "List is empty." << endl;
        return;
    }
    node *temp = head;
    head = head->next;
    if (head != 0)
        head->previous = 0;
    delete temp;
    display_linked_list(head);
}
void delete_last_node(node* &head){
    if (head == 0) {
        cout << "List is empty." << endl;
        return;
    }
    if (head->next == 0) {
        delete head;
        head = 0;
        cout << "List is now empty." << endl;
        return;
    }
    node *temp = head;
    while (temp->next != 0) {
        temp = temp->next;
    }
    temp->previous->next = 0;
    delete temp;
    display_linked_list(head);
}
void delete_at_any_node(node* &head, int position){
    if (position < 1 || head == 0) {
        cout << "Invalid position or list is empty!" << endl;
        return;
    }
    if (position == 1) {
        delete_first_node(head);
        return;
    }
    node *temp = head;
    for (int i = 1; i < position && temp != 0; i++) {
        temp = temp->next;
    }
    if (temp == 0) {
        cout << "Invalid position!" << endl;
        return;
    }
    temp->previous->next = temp->next;
    if (temp->next != 0) {
        temp->next->previous = temp->previous;
    }
    delete temp;
    display_linked_list(head);
}
int main(){
    node *head = 0;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        insert_at_last_node(head, x);
    }
    cout << "Linked list: " << endl;
    display_linked_list(head);
    int data, position;
    cout << "Enter data to insert at first node: ";
    cin >> data;
    insert_at_first_node(head, data);
    display_linked_list(head);
    cout << "Enter data to insert at last node: ";
    cin >> data;
    insert_at_last_node(head, data);
    display_linked_list(head);
    cout << "Enter data to insert: ";
    cin >> data;
    cout << "Enter position to insert: ";
    cin >> position;
    insert_at_any_node(head, data, position);
    display_linked_list(head);
    cout << "Deleting first node: " << endl;
    delete_first_node(head);
    cout << "Deleting last node: " << endl;
    delete_last_node(head);
    cout << "Enter position to delete: ";
    cin >> position;
    delete_at_any_node(head, position);
    return 0;
}
