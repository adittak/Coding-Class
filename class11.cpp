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
    if(HEAD!=NULL) // list has at least 1 element previously
    {
        HEAD->prev = n;
    }
    HEAD = n;
}

void insertAtTail(DoublyNode* &HEAD, int val)
{
    DoublyNode* n = new DoublyNode(val); // new node in heap

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
    while(temp->next != NULL)
    {
        temp = temp->next;
    }

    while(temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->prev; // temp = NULL at last
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

void deleteAtHead(DoublyNode* &HEAD)
{
    DoublyNode* toBeDeleted = HEAD;
    HEAD = HEAD->next;
    HEAD->prev = NULL;

    delete toBeDeleted;
}

void deleteFromList(DoublyNode* &HEAD, int pos)
{
    DoublyNode* temp = HEAD;
    if(temp == NULL)
    {
        cout << "No element to delete." << endl;
        return;
    }

    if(pos == 1)
    {
        deleteAtHead(HEAD);
        return;
    }

    int i = 1;

    while(temp!=NULL && pos != i)
    {
        temp = temp->next;
        i++;
    }

    DoublyNode* n = temp;

    temp->prev->next = temp->next;

    if(temp->next != NULL)
    {
        temp->next->prev = temp->prev;
    }

    delete n;
}

int main()
{
    DoublyNode* HEAD = NULL;
    insertAtHead(HEAD, 3);
    insertAtTail(HEAD, 5);
    insertAtTail(HEAD, 7);
    insertAtHead(HEAD, 8);
    display(HEAD);
    // reverseDisplay(HEAD);

    deleteFromList(HEAD, 3);
    display(HEAD);
    deleteFromList(HEAD, 1);
    display(HEAD);
    deleteAtHead(HEAD);
    display(HEAD);

    return 0;
}
