#include <bits/stdc++.h>
using namespace std;

class Solution
{
private:
int x=0;
public:
    void read(const string& arr) // can also write void read (string arr) but this wil pass by value, so it is inefficient for large strings because it involves making a copy
    {
        if (arr.find("++") != string::npos) //The find method returns the position (index) of the first character of the first occurrence of the substring. If the substring is not found, it returns a special value std::string::npos.
        {
            x++;
        }
        else
        {
            x--;
        }
    }

    int answer()
    {
        return x;
    }
};



int main()
{
    int t;
    cin>>t;
    Solution work;
    for (int i=1; i<=t; i++)
    {
        string inst;
        cin>>inst;
        work.read(inst);
    }

    cout<< work.answer();
    return 0;
}