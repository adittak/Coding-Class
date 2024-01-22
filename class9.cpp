#include<bits/stdc++.h>
using namespace std;

class Node          //linked list topic
{
public:
    int value;
    Node* next;

    Node(int val)
    {
        value = val;
        next = NULL;
    }
};

void lastInsert(Node* &HEAD, int val)
{
    Node* n = new Node(val); // new node in heap

    if(HEAD == NULL)        //this is for the first insert
    {
        HEAD = n;
        return;
    }

    Node* temp = HEAD;                 
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(Node* HEAD)
{
    Node* temp = HEAD;
    while(temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main()
{
    Node* HEAD = NULL;
    lastInsert(HEAD, 2);
    lastInsert(HEAD, 5);
    lastInsert(HEAD, 6);
    display(HEAD);

    return 0;
}
