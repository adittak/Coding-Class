#include<bits/stdc++.h>
using namespace std;

class Node
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

void firstInsert(Node* &HEAD, int val)
{
    Node* n = new Node(val);
    n->next = HEAD;
    HEAD = n;
}

void lastInsert(Node* &HEAD, int val)
{
    Node* n = new Node(val); // new node in heap

    if(HEAD == NULL)
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
    while(HEAD != NULL)
    {
        cout << HEAD->value << "->";
        HEAD = HEAD->next;
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

    firstInsert(HEAD, 7);
    display(HEAD);

    return 0;
}
