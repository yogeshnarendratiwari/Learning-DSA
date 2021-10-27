#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int a, b;
    cin >> a >> b;
    int A[a], B[b];
    for (int i = 0; i < a; i++)
    {
        cin >> A[i];
    }
    for (int i = 0; i < b; i++)
    {
        cin >> B[i];
    }
    int max = 0;
    for (int i = 0; i < a; i++)
    {
        if (A[i] > max)
            max = A[i];
    }
    int min = B[0];
    for (int i = 0; i < b; i++)
    {
        if (min > B[i])
            min = B[i];
    }
    int count = 0;
    if (max > min)
        cout << count << endl;
    else
    {

        for (int i = max; i <= min; i++)
        {
            for (int j = 0; j < a; j++)
            {
                if (i % A[j] == 0)
                    count++;
            }
            if (count == a)
                v.push_back(i);
        }
    }
    int number=0;
   for(int x=0 ; x<v.size() ; x++){ 
    for(int k= 0; k<b ; k++){
             if(B[k]%v[x]==0)
             number++;
    }
    
   }
   cout<<number<<endl;
}