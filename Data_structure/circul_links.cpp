#include<bits/stdc++.h>
using namespace std;
 
class Node
{
public:
    int data;
    Node *next;
};
 
class Node *addToEmpty(struct Node *last, int data)
{
    // This function is only for empty list
    if (last != NULL)
      return last;
 
    // Creating a node dynamically.
   class Node *temp = new Node();
 
    // Assigning the data.
    temp -> data = data;
    last = temp;
 
    // Creating the link.
    last -> next = last;
 
    return last;
}
 
class Node *addBegin(class Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);
 
    class Node *temp = new Node();
 
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
 
    return last;
}
 
class Node *addEnd(struct Node *last, int data)
{
    if (last == NULL)
        return addToEmpty(last, data);
     
    class Node *temp = new Node();
 
    temp -> data = data;
    temp -> next = last -> next;
    last -> next = temp;
    last = temp;
 
    return last;
}
 
class Node *addAfter(class Node *last, int data, int item)
{
    if (last == NULL)
        return NULL;
 
    class Node *temp, *p;
    p = last -> next;
    do
    {
        if (p ->data == item)
        {
            temp = new Node();
            temp -> data = data;
            temp -> next = p -> next;
            p -> next = temp;
 
            if (p == last)
                last = temp;
            return last;
        }
        p = p -> next;
    }  while(p != last -> next);
 
    cout << item << " not present in the list." << endl;
    return last;
 
}
 
void traverse(class Node *last)
{
    class Node *p;
 
    // If list is empty, return.
    if (last == NULL)
    {
        cout << "List is empty." << endl;
        return;
    }
 
    // Pointing to first Node of the list.
    p = last -> next;
 
    // Traversing the list.
    do
    {
        cout << p -> data << " ";
        p = p -> next;
 
    }
    while(p != last->next);
 
}
 
// Driven Program
int main()
{
    class Node *last = NULL;
 
    last = addToEmpty(last, 6);
    last = addBegin(last, 4);
    last = addBegin(last, 2);
    last = addEnd(last, 8);
    last = addEnd(last, 12);
    last = addAfter(last, 10, 8);
 
    traverse(last);
 
    return 0;
}