// #include<stdio.h>
// int main ()
// {
//     int t;
//     scanf("%d",&t);
//     while(t--){
//         int n;
//         scanf("%d",&n);
//         if(n%3==0){
//             printf("%d\n",n/3);
//         }
//         else if(n%2==0){
//             printf("%d\n",n/2);
//         }
//         else{
//             if(n%3==2){
//                 printf("%d\n",(n/3)+1);
//             }
//             else if(n%3==1){
//                 printf("%d\n",(n/3)+2);
//             }
//             else if(n%2==1){
//                 printf("%d\n",(n/2)+1);
//             }
//         }
//     }    
    
//     return 0;
// }
#include<stdio.h>
int max(int a, int b){
    if(a<b){
        return a;
    }
    else{
        return b;
    }
}
int main ()
{
    int a, b;    
    scanf("%d%d",&a,&b);
    int c=max(a,b);
    printf("%d",c);
    return 0;
}
