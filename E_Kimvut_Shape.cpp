#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int n;
    cin>>n;
    if(n==1){
        cout<<"A";
    }
    if(n==2){
        cout<<"  B\n";
        cout<<"B A B\n";
        cout<<"  B\n";
    }
    if(n==3){
        cout<<"    C \n";
        cout<<"  C B C \n";
        cout<<" C B A B C \n";
        cout<<"  C B C \n";
        cout<<"    C \n";
    }
    if(n==4){
        cout<<"       D \n";
        cout<<"     D C D \n";
        cout<<"   D C B C D \n";
        cout<<" D C B A B C D \n";
        cout<<"   D C B C D \n";
        cout<<"     D C D \n";
        cout<<"       D \n";
    }
    if(n==5){
        cout<<"         E \n";
        cout<<"       E D E \n";
        cout<<"     E D C D E \n";
        cout<<"   E D C B C D E \n";        
        cout<<" E D C B A B C D E \n";
        cout<<"   E D C B C D E \n";
        cout<<"     E D C D E \n";
        cout<<"       E D E \n";
        cout<<"         E \n";
    }
    if(n==6){
        cout<<"           F \n";
        cout<<"         F E F \n";
        cout<<"       F E D E F \n";
        cout<<"     F E D C D E F \n";
        cout<<"   F E D C B C D E F \n";
        cout<<" F E D C B A B C D E F \n";
        cout<<"   F E D C B C D E F \n";
        cout<<"     F E D C D E F \n";
        cout<<"       F E D E F \n";
        cout<<"         F E F \n";
        cout<<"           F \n";
    }
    if(n==7){
        cout<<"             G \n";
        cout<<"           G F G \n";
        cout<<"         G F E F G \n";
        cout<<"       G F E D E F G \n";
        cout<<"     G F E D C D E F G \n";
        cout<<"   G F E D C B C D E F G \n";
        cout<<" G F E D C B A B C D E F G \n";
        cout<<"   G F E D C B C D E F G \n";
        cout<<"     G F E D C D E F G \n";
        cout<<"       G F E D E F G \n";
        cout<<"         G F E F G \n";
        cout<<"           G F G \n";
        cout<<"             G \n";
    }
    
    return 0;
}