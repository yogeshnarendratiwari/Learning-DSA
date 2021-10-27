#include <bits/stdc++.h>
using namespace std;

class List
{
public:
    int data;
    List *next;
};
class Transversal
{

public:
    void transversal(List *ptr)
    {
        List *p = (List *)malloc(sizeof(List));
        p = ptr;
        while (p != NULL)
        {
            cout << p->data << " ";
            p = p->next;
        }
    }
};


class Problem{

    public : List* problem(List *ptr){
          List* s= (List*) malloc (sizeof(List));
          List* e = (List*) malloc (sizeof(List));
          List* p = (List*) malloc (sizeof(List));
          p=ptr;

       while(p!=NULL){
          
          if(p->data %2 ==0 && p->next->data%2==0)
          {
              s=p;
              e=p->next;

              s->next=e->next;
              e->next=s;
              return 

          }

       }   
    

    }
};



int main()
{

    List *head;
    List *second;
    List *third;
    List *fourth;
    head = (List *)malloc(sizeof(List));
    second = (List *)malloc(sizeof(List));
    third = (List *)malloc(sizeof(List));
    fourth = (List *)malloc(sizeof(List));

    head->data = 6;
    head->next = second;
    second->data = 8;
    second->next = third;
    third->data = 7;
    third->next = fourth;
    fourth->data = 19;
    fourth->next = NULL;
    Transversal t;
    t.transversal(head);

}