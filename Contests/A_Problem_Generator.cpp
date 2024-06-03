#include<bits/stdc++.h>
using namespace std;

int minProb(string prob, int n, int m)
{
    int result=0;
    map<char, int> hashmap;
     for (char c = 'A'; c <= 'G'; ++c)
    {
        hashmap[c] = 0;
    }

    for (int i = 0; i < n; i++)
    {
        hashmap[prob[i]]++;
    }

    for (auto i= hashmap.begin(); i!=hashmap.end(); i++)
    {
        if (i->second<m)
        {
            result+=m-i->second;
        }
        else continue;        
    }
    return result;
}

void inputAndOutput()
{
    int n, m;
    cin>>n>>m;

    string prob;
    cin>>prob;

    int ans= minProb(prob, n, m);

    cout<< ans<< endl;

    return;
}

int main()
{
    int t;
    cin>>t;
    for (int i=1; i<=t; i++)
    {
        inputAndOutput();
    }
    return 0;
}