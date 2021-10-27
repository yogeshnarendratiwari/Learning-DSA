#include <bits/stdc++.h>
using namespace std;
int main()
{
    int Questions, Max_Difficulty, Skip = 0, Attempted = 0;
    cin >> Questions >> Max_Difficulty;
    int PerQuestionDifficulty[Questions];
    for (int i = 0; i < Questions; i++)
    {
        cin>>PerQuestionDifficulty[i];
    }
    for (int i = 0; i < Questions; i++){
        if(PerQuestionDifficulty[i]<=Max_Difficulty)
        Attempted++;
        else
        Skip++;
        if(Skip==2)
        break;
    }
    cout<<Attempted<<endl;
}