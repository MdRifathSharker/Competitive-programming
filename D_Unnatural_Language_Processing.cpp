#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string a;
        cin>>a;
            string x;
        for(int i=0;i<n;i++){
            if(a[i]!='a'||a[i]!='e'||a[i]!='i'||a[i]!='o'||a[i]!='u'){
                if(a[i+1]=='a'||a[i+1]=='e'||a[i+1]=='i'||a[i+1]=='o'||a[i+1]=='u'){
                    if(a[i+2]!='a'||a[i+2]!='e'||a[i+2]!='i'||a[i+2]!='o'||a[i+2]!='u'){
                        if(a[i+3]=='a'||a[i+3]=='e'||a[i+3]=='i'||a[i+3]=='o'||a[i+3]=='u'){
                            // cout<<a[i]<<a[i+1]<<'.';
                            // x += a[i] + a[i + 1];
                            
                            x.push_back(a[i]);
                            if(i + 1 < n) x.push_back(a[i + 1]);
                            if(i + 2 < n) x.push_back('.');
                            i+=1;
                        }
                        else{
                            // cout<<a[i]<<a[i+1]<<a[i+2]<<'.';
                            // x += a[i] + a[i + 1] + a[i + 2];
                            x.push_back(a[i]);
                            if(i + 1 < n) x.push_back(a[i + 1]);
                            if(i + 2 < n) x.push_back(a[i + 2]);
                            if(i + 3 < n ) x.push_back('.');
                            i+=2;
                        }
                    } 
                }
            }
        }
        // x.pop_back();
        cout << x << endl;
        // cout<<endl;
        // for(auto x : v) cout << x << '\n';
    }


    return 0;
}