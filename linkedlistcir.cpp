#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node *next;
};
void display_linked_list(node *head){
    void *head2=head;
    while(head!=0){
        cout<<head<<' '<<head->data<<' '<<head->next<<endl;
        head=head->next;
        if(head==head2){
            break;
        }
    }
}
void insert_at_last_node(node *head){
    node *temphead=head,*temphead2=head;
    cout<<"enter the data ";
    int x;
    cin>>x;
    node *temp=new node();
    temp->data=x;
    head=head->next;
    while(head!=0){
        if(head->next==temphead){
            head->next=temp;
            temp->next=temphead2;
            break;
        }
        head=head->next;
    }
    display_linked_list(temphead);
}
void insert_at_first_node(node *head){
    node *temphead=head,*temphead2=head;
    cout<<"enter the data ";
    int x;
    cin>>x;
    node *temp=new node();
    temp->data=x;
    temp->next=head;
    while(temphead->next!=head){
        if(temphead2->next==head){
            head->next=temp;
            break;
        }
        temphead2=temphead2->next;
    }
    display_linked_list(head);
}
void insert_at_any_node(node *head){
    cout<<"after which element you want to insert ";
    int x;
    cin>>x;
    cout<<"which element you want to insert ";
    int p;
    cin>>p;
    node *temp=new node();
    temp->data=p;
    node *temphead=head,*temphead2;
    while(temphead!=0){
        if(temphead->data==x){
            temphead2=temphead->next;
            break;
        }
        temphead=temphead->next;
    }
    temp->next=temphead2;
    temphead->next=temp;
    display_linked_list(head);    
}
void delete_first_node(node *head){
    head=head->next;
    display_linked_list(head);
}
void delete_last_node(node *head){
    node *temphead=head;
    while(temphead->next->next!=0){
        temphead=temphead->next;
    }
    temphead->next=0;
    display_linked_list(head);
}
void delete_any_node(node *head){
    display_linked_list(head);
    cout<<"Which data you want to delete ";
    int x;
    cin>>x;
    node *temphead=head,*temphead2=0;
    while(temphead!=0){
        if(temphead->next->data==x){
            temphead->next=temphead->next->next;
            break;
        }
        temphead=temphead->next;
    }   
    display_linked_list(head);
}
int main ()
{
    node *head=0,*tail,*temp;
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
    cout<<"1.display_linked_list\n2.insert_at_first_node\n3.insert_at_last_node\n4.insert_at_any_node\n5.delete_first_node\n6.delete_last_node\n7.delete_any_node\nenter the operation ";
    while(1){
        int o;
        cin>>o;
        if(o==1){
            display_linked_list(head);
        }
        if(o==2){
            insert_at_first_node(head);
        }
        if(o==3){
            insert_at_last_node(head);
        }
        if(o==4){
            insert_at_any_node(head);
        }
        if(o==5){
            delete_first_node(head);
        }
        if(o==6){
            delete_last_node(head);
        }
        if(o==7){
            delete_any_node(head);
        }
    }
    return 0;
} 