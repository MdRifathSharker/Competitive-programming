#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void display_linked_list(node *head){
    node *temphead=head;
    while(temphead!=0){
        cout<<temphead<<" "<<temphead->data<<" "<<temphead->next<<endl;
        temphead=temphead->next;
    }
}
void update_data(node *head){
    node *temphead=head;
    cout<<"which data you want to update: ";
    int x;
    cin>>x;
    cout<<"Give value: ";
    int p;
    cin>>p;
    while(temphead!=0){
        if(temphead->data==x){
            temphead->data=p;
        }
        temphead=temphead->next;
    }
    display_linked_list(head);
}
void insert_at_any_node(node *head){
    node *temphead=head;
    cout<<"After which data you want to insert: ";
    int x;
    cin>>x;
    node *temp= new node();
    cout<<"which data you want to insert ";
    int p;
    cin>>p;
    temp->data=p;
    while(1){
        if(temphead->data==x){
            temp->next=temphead->next;
            temphead->next=temp;
            break;
        }
        temphead=temphead->next;       
    }
    display_linked_list(head);
}
int main ()
{
    node *head=0,*temp=0,*tail=0;
    cout<<"how many element you want to insert at linked list: ";
    int n;
    cin>>n;
    cout<<"Give value: ";
    for(int i=0;i<n;i++){
        temp=new node();
        int x;
        cin>>x;
        temp->data=x;
        if(head==0){
            head=temp;
        }
        else{
            tail->next=temp;
        }
        tail=temp;
    }
    tail->next=0;
    display_linked_list(head);
    update_data(head);
    insert_at_any_node(head);
    return 0;
}