#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next,*previous;
};
void display_linked_list(node *head){
    node *temphead=head;
    int c=0;
    while(head!=0){
        if(temphead==head){
            c++;
            if(c==2){
            break;
            }
        }
        cout<<head->previous<<" "<<head->data<<" "<<head<<" "<<head->next<<endl;
        head=head->next;
    }
}
int main()
{
    node *head=0,*tail,*temp,*track;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        temp=new node();
        temp->data=x;
        if(head==0){
            temp->previous=0;
            head=temp;
        }
        else{
            tail->next=temp;
            tail->previous=tail;
        }
        tail=temp;
    }
    tail->next=head->previous;
    tail->previous=temp;
    display_linked_list(head);

    return 0;
}