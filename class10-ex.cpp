#include<bits/stdc++.h>
using namespace std;

class DoublyNode
{
public:
    int value;
    DoublyNode* next;
    DoublyNode* prev;

    DoublyNode(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(DoublyNode* &HEAD, int val)
{
    DoublyNode* n = new DoublyNode(val);
    n->next = HEAD;
    if(HEAD!=NULL)
    {
        HEAD->prev = n;
    }
    HEAD = n;
}

void insertAtTail(DoublyNode* &HEAD, int val)
{
    DoublyNode* n = new DoublyNode(val); // new node in heap

    /*
    if(HEAD == NULL)
    {
        HEAD = n;
        return;
    }*/

    DoublyNode* temp = HEAD;
    while(temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(DoublyNode* temp)
{
    while(temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

void reverseDisplay(DoublyNode* temp)
{
    while(temp->next != NULL)       //reach to the last element
    {
        temp = temp->next;
    }

    while(temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->prev;
    }
    cout << "NULL" << endl;
}

bool searchList(DoublyNode* temp, int val)
{
    while(temp != NULL)
    {
        if(temp->value == val) return true;

        temp = temp->next;
    } 

    return false;
}


int main()
{
    DoublyNode* HEAD = NULL;
    insertAtHead(HEAD, 3);
    insertAtHead(HEAD, 5);
    insertAtHead(HEAD, 7);
    insertAtTail(HEAD, 8);
    display(HEAD);
    reverseDisplay(HEAD);

    return 0;
}
