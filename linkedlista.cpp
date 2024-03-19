#include<bits/stdc++.h>
using namespace std;
class node{
    int data;
    node *next, *previous;
};
void display_linked_list(node* head){

}
int main ()
{
    node *head=0;
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        //insert_at_last_node(head,x);
    }
    cout<<"Linked list : "<<endl;
    display_linked_list(head);
    int data,position;
    cout<<"Enter data to insert at last node: ";
    cin>>data;

    return 0;
}