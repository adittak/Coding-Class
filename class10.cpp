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

void display(Node* temp)
{
    while(temp != NULL)
    {
        cout << temp->value << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

bool searchList(Node* temp, int val)
{
    while(temp != NULL)
    {
        if(temp->value == val) return true;

        temp = temp->next;      //it's an else statement
    }

    return false;
}

void deleteAtHead(Node* &HEAD)      //if there is only one element or I would like to delete the first element 
{
    Node* toBeDeleted = HEAD;
    HEAD = HEAD->next;

    delete toBeDeleted;
}

void deleteFromList(Node* &temp2, int val)          //any elements 
{
    Node* temp = temp2;
    if(temp == NULL)                //if the list does not have any item
    {
        cout << "No element to delete." << endl;
        return;
    }

    if(temp->next == NULL)      //if the list has only one element
    {
        deleteAtHead(temp2);
        return;
    }

    while(temp->next->value != val)         //normal case
    {
        temp = temp-> next;     //this lands on the previous node
    }
    Node* n = temp->next;           //the one we would delete 
    temp->next = temp->next->next;      //set the delete one to the next node

    delete n;
}

int main()
{
    Node* HEAD = NULL;
    lastInsert(HEAD, 2); // done
    // lastInsert(HEAD, 5); // done
    // lastInsert(HEAD, 6);
    // display(HEAD);

    // firstInsert(HEAD, 7);
    display(HEAD);
    // deleteFromList(HEAD, 2);
    deleteAtHead(HEAD);
    display(HEAD);

    // cout << searchList(HEAD, 10) << endl;


    return 0;
}
