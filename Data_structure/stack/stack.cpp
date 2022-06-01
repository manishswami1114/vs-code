#include <bits/stdc++.h>
usiong namespace std;
int top=-1;
void push (int val int *arr ){
    if(top>=n-1){
        cout<<"stack is overflow"<<endl;
    }
    else{
        top++;
        arr[top]=val;
    }
    void pop(int &n){
        if(top<=-1){
            cout<<"stack is undefflow"<<endl;
        }
        eles{
            cout<<"poped elements are "<<arr[top]<<endl;
            top--;
        }
    }
    void display(){
        if(top==0){
            cout<<"stack elements are  ";
            for(int i=top;i>=0;i--){
                cout<<arr[i]<<endl;
            }
        }
        else{
            cout<<"stack elements are "<<arr[top]<<endl;
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    display(int n);
    pop(int n);
    push(int n);
}