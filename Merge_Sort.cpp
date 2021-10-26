#include <bits/stdc++.h>
using namespace std;

class Merge_Sort
{
public:
    int *merge(int *L, int *R, int l, int m, int r)
    {
        int i = l;
        int j = m + 1;
        int k = l;
        int *arr = new int[500];

        while (i <= m && j <= r)
        {
            if (*(L + i) <= *(R + j))
            {
                arr[l] = *(L + i);
                i++;
            }
            else
            {
                arr[l] = *(R + i);
                j++;
            }
            k++;
        }

        if (l > m)
        {
            while (j <= r)
            {
                arr[l] = *(R + i);
                j++;
                k++;
            }
        }
        else
        {
            while (i <= m)
            {
                arr[l] = *(L + i);
                i++;
                k++;
            }
        }

        int *p = arr;
        return p;
    }

}

int
main()
{
    int L[] = {1, 8, 5, 4};
    int R[] = {5, 4, 3, 2};
    Merge_Sort m;
   int *P = m.merge(L,R,0,4,8);
   for(int i=0 ; i<8 ; i++){
       cout<<*(P+i)<<" ";
   }
}