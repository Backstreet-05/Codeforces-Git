#include <bits/stdc++.h>
using namespace std;

int compareLetters (int n, string ps)
{
    int ans=1;
    for (int i=0; i<n-1; i++)
    {
        if ((static_cast<int>(ps[i])>=97 && static_cast<int>(ps[i])<=122)&&(static_cast<int>(ps[i+1])>=97 && static_cast<int>(ps[i+1])<=122)&&(static_cast<int>(ps[i])>static_cast<int>(ps[i+1])))
        {
            ans=0;
            break;
        }
        else continue;
    }
    return ans;
}

int compareDigits (int n, string ps)
{
    int ans=1;
    for (int i=0; i<n-1; i++)
    {
        if ((static_cast<int>(ps[i])>=48 && static_cast<int>(ps[i])<=57)&&(static_cast<int>(ps[i+1])>=48 && static_cast<int>(ps[i+1])<=57)&&(static_cast<int>(ps[i])>static_cast<int>(ps[i+1])))
        {
            ans=0;
            break;
        }
        else continue;
    }
    return ans;
}

int digitAfterLetter (int n, string ps)
{
    int ans=1;
    for (int i=0; i<n-1; i++)
    {
        if ((static_cast<int>(ps[i])>=97 && static_cast<int>(ps[i])<=122)&&((static_cast<int>(ps[i+1])>=48 && static_cast<int>(ps[i+1])<=57)))
        {
            ans=0;
            break;
        }
        else continue;
    }
    return ans;
}

int checkAscii(int n, string ps)
{
    int ans=1;
    for(int i=0; i<n; i++)
    {
        if (!((static_cast<int>(ps[i])>=48 && static_cast<int>(ps[i])<=57)||(static_cast<int>(ps[i])>=97 && static_cast<int>(ps[i])<=122)))
        {
            ans=0;
            break;
        }
        else continue;
    }
    return ans;
}

void inputAndOutput()
{
    int size;
    string password;
    cin>>size;
    cin>> password;

    int case1, case2, case3, case4 =-1;

    case1= checkAscii(size, password);
    case2= digitAfterLetter(size, password);
    case3= compareDigits(size, password);
    case4= compareLetters(size, password);

    if (case1==1 && case2==1 && case3==1 && case4==1)
    {
        cout<<"YES"<<endl;
    } 
    else cout<<"NO"<<endl;
    return; 
}

int main()
{
    int n;
    cin>>n;

    for (int i=1; i<=n; i++)
    {
        inputAndOutput();
    }

    return 0;
}