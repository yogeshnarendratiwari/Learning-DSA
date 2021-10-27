#include <bits/stdc++.h>
using namespace std;
#define n 100
class Stack
{

    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }
    void Push(int x)
    {
        if (top == n - 1)
        {
            cout << "No space" << endl;
        }
        top++;
        arr[top] = x;
    }
    void Pop()
    {
        if (top == -1)
        {
            cout << "Empty" << endl;
        }
        top--;
    }
    int Top()
    {
        if (top == -1)
        {
            cout << "ERROR" << endl;
        }
        return arr[top];
    }
    bool Empty()
    {
        return top == -1;
    }
    void Print(){
        for(int i=0 ; i<top+1 ; i++){
            cout<<arr[i]<<" ";
        }
    }
};

int main()
{
    Stack S;
    S.Push(1);
    S.Push(2);
    S.Push(3);
    S.Push(4);
    S.Push(5);
    S.Push(6);
    S.Print();
    S.Pop();
    S.Pop();
    S.Print();
    cout<<S.Top()<<endl;
    cout<<S.Empty()<<endl;
    
}