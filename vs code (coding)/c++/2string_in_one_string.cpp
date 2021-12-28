#include<iostream>
using namespace std;
int main(){
    char a[100],b[100];
    cin.getline(a,100);
    cin>>b;
    int i=0;int j=0;
    char temp=0;
    while(a[i]!='\0')
        i++;
        a[i]=' ';
        i++;
    while(b[i]!='\0')
        i++;
    while(j>i){
        temp=b[j];
        b[j]=b[i];
        b[i]=temp;
        a[i]=temp;
        i++;
        j++;
    }
    a[i]='\0';
    cout<<a<<endl;
    return 0;
}