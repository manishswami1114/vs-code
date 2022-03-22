/*#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int info;
    Node *next;
};

void printList(Node *n)
{

    while (n != NULL)
    {
        cout << n->info << endl;
        n = n->next;
    }
}

int main()
{
    Node *start = NULL;
    int n;
    cin >> n;
    Node *ptr;
    while (n--)
    {
        Node *x = new Node();
        cin >> x->info;
        x->next = NULL;
        ptr = start;
        if (start == NULL)
        {
            start = x;
        }
        else
        {
            while (ptr->next!= NULL)
            {
                ptr = ptr->next;
            }
            ptr->next = x;
        }
    }
    printList(start);
}*/

#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int info;
    Node *next;
};
int main(){
    Node* start = NULL;
    Node* ptr,*temp;
    int n,i=0;
    cin>>n;
    while(i<n){
        temp=new Node();
        cin>>temp->info;
        if(start==NULL){
            start=temp;
            start->next=NULL;

        }
        else{
            temp->next=start;
            start=temp;
        }
        i++;
    }
    ptr=start;
    while (ptr!=NULL)
    {
    cout<<ptr->info<<" ";
    ptr=ptr->next;
    }
    cout<<endl;
    

}