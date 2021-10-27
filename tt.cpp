#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int A[n], B[n];
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
        cin >> B[i];
    }
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (A[i] != -1)
            sum1 += A[i];
        if (B[i] != -1)
            sum2 += B[i];
    }
    int count = 0;

    if (sum1 != sum2)
    {
        for (int i = 0; i < n; i++)
        {    int ans1=sum1+i;
             int ans2=sum2+i;
            if (ans1==ans2)
                count++;
            else if (ans1==sum2)
                count++;
            else if (sum1 == ans2)
                count++;
        }
        cout << count << endl;
    }
    else
        cout << "Infinte" << endl;
}