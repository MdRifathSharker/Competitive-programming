// #include<bits/stdc++.h>
// using namespace std;
// class node {
//     public:
//     int data;
//     node *next;
// };
// int main ()
// {
//     node *head=0,*tail,*temp;
//     int n;
//     cin>>n;
//     for(int i=0;i<n;i++){
//         int x;
//         cin>>x;
//         temp=new node();
//         temp->data=x;
//         if(head==0){
//             head=temp;
//         }
//         else{
//             tail->next=temp;
//         }
//         tail=temp;
//     }
//     tail->next=0;
//     node *temphead=head;
//     int count=0;
//     while(temphead!=0){
//         count++;
//         temphead=temphead->next;
//     }
//     cout<<count;
//     return 0;
// }
#include<bits/stdc++.h>
using namespace std;
class node {
    public:
    int data;
    node *next;
};
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
    tail->next=0;
    node *temphead=head;
    int rplcData,prticlrData;
    cin>>rplcData>>prticlrData;
    while(1){
        if(temphead->data==prticlrData){
            prticlrData=rplcData;
            break;
        }
        temphead=temphead->next;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int32_t main() {
    ios_base :: sync_with_stdio(false);
    cin.tie(NULL);


    return 0;
}