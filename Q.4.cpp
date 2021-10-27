#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};

void Traversal(struct Node *c)
{
    while (c != NULL)
    {
        cout << c->data << " ";
        c = c->next;
    }
}
void ReverseTraversal(struct Node *head)
{
    struct Node *p = NULL;
    struct Node *c = head;
    struct Node *n = head;
    while (n != NULL)
    {
        n = n->next;
        c->next=p;
        p=c;
        c=n;
    }
    struct Node* ptr = p;
    while(p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}

int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *secondNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *thirdNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourthNode = (struct Node *)malloc(sizeof(struct Node));

    head->data = 9;
    head->next = secondNode;
    secondNode->data = 8;
    secondNode->next = thirdNode;
    thirdNode->data = 7;
    thirdNode->next = fourthNode;
    fourthNode->data = 6;
    fourthNode->next = NULL;
    //Traversal of linked list
    Traversal(head);
    // Travesal of Reverse Linked List
    ReverseTraversal(head);
}