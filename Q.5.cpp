#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};
int Checking(struct Node* head,int data){
    struct Node*p = head;
    struct Node*n; 
    struct Node*c;

    int i=0;
    while (p!=NULL)
    {
         n=p->prev;
         c=p->next;
    if(n->data<=data<=c->data || c->data<=data<=n->data )
      return i;
      i++;

        p=p->next;


    }
    return -1;
    

}



int main()
{
    struct Node *head = (struct Node *)malloc(sizeof(struct Node));
    struct Node *secondNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *thirdNode = (struct Node *)malloc(sizeof(struct Node));
    struct Node *fourthNode = (struct Node *)malloc(sizeof(struct Node));

    head->data = 9;
    head->next = secondNode;
    head->prev=NULL;
    secondNode->data = 8;
    secondNode->next = thirdNode;
    secondNode->prev=head;
    thirdNode->data = 7;
    thirdNode->next = fourthNode;
    thirdNode->prev=secondNode;
    fourthNode->data = 5;
    fourthNode->next = NULL;
    fourthNode->prev=thirdNode;
    cout<<Checking(head,6);
}