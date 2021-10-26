// Two stacks in an array
#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int size;
    int *arr;
    int top1;
    int top2;

public:
    Stack(int s)
    {
        size = s;
        top1 = -1;
        top2 = -1;
        arr = (int *)malloc(size * sizeof(int));
    }
    void push1(int element)
    {
        if (top1 == size - 1)
            cout << "Stack is full" << endl;
        else
        {
            top1 = top2 + 1;
            arr[top1] = element;
        }
    }
    void push2(int element)
    {
        if (top2 == size - 1)
            cout << "Stack is full" << endl;
        else
        {
            top2 = top1 + 1;
            arr[top1] = element;
        }
    }

    void pop1()
    {
        if (top1 == -1)
            cout << "Stack is empty" << endl;
        else if (top2 == -1)
            top1--;
        else
            top1 = top2 - 1;
    }
    void pop2()
    {
        if (top2 == -1)
            cout << "Stack is empty" << endl;
        else if (top1 == -1)
            top2--;
        else
            top2 = top1 - 1;
    }
    void print()
    {
        if (top1 > top2)
        {
            for (int i = 0; i < top1 + 1; i++)
            {
                cout << arr[i] << " ";
            }
        }
        else
        {
            for (int i = 0; i < top2 + 1; i++)
            {
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }
};

int main()
{
    Stack s(20);
    s.push1(2);
    s.push1(3);
    s.push2(4);
    s.pop1();
    s.pop2();
    s.pop2();
    s.print();
}