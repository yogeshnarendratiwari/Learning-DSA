#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int size;
    int *arr;
    int top;

public:
    Stack (int s)
    {
        size = s;
        top = -1;
        arr = (int *)malloc(size * sizeof(int));
    }
    void push(int element)
    {
        if (full())
            cout << "Stack is full" << endl;
        else
        {
            top++;
            arr[top] = element;
        }
    }

    void pop()
    {
        if (empty())
            cout << "Stack is empty" << endl;
        else
            top--;
    }
    void print()
    {
        for (int i = 0; i < top + 1; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    bool empty()
    {
        if (top == -1)
            return true;
        return false;
    }
    bool full()
    {
        if (top == size - 1)
            return true;
        return false;
    }
    int peek(){
        return arr[top];
    }
};

int main()
{ 
    Stack  s(20);
    s.push(1);
    s.push(2);
    s.print();
    s.pop();
    s.print();
    s.pop();
    cout << s.empty() << endl;
    cout << s.full() << endl;
    s.pop();
}