#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void display(node *head){
    node *temphead=head;
    while(temphead!=0){
        cout<<temphead<<' '<<temphead->data<<' '<<temphead->next<<endl;
        temphead=temphead->next;
        if(temphead ==head){
            break;
        }
    }
}
int main ()
{
    node *head=0, *temp, *tail;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp=new node();
        temp->data=x;
        if(head==0){
            head=temp;
        }
        else{
            tail->next=temp;
        }
        tail=temp;
    }
    tail->next=head;
    display(head);
    return 0;
}