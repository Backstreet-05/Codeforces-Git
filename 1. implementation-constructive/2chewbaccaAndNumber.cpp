#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Answer
{
    private:
    static int checker;
    int digit=0;
    
    public:
    vector<int> generateVector(int n)
    {
        vector<int> ans;
        while (n!=0)
        {
            ans.push_back(n%10);
            n/=10;
            digit++;
        }
        reverse(ans.begin(), ans.end());
        if (ans[0]==9)
        {
            checker=1;
        }
        return ans;
    }

    int transformNumber(int x)
    {
        if (x>4 && digit!=1) 
        x=9-x;

        else if (digit==1 && x==9)
        x=9;

        return x;
    }

   int generateNumber(vector<int> vec)
    {
        int toBeReturned = 0;
        for (int i = 0; i < digit; i++)
        {
            toBeReturned *= 10;
            toBeReturned += vec[i];
        }
        return toBeReturned;
    }

     int getChecker() const
    {
        return checker;
    }

};

int Answer::checker = -1;

int main()
{
    int n;
    cin>>n;
    Answer final;

    vector<int> nvector= final.generateVector(n);

    for (int i=0; i<nvector.size(); i++)
    {
        nvector[i]= final.transformNumber(nvector[i]);
    }

    if (final.getChecker() == 1)
    {
        if (nvector[0] == 0)
        {
            nvector.erase(nvector.begin());
            nvector.insert(nvector.begin(), 9);
        }
        else if (nvector[0] == 9)
        {
            nvector.erase(nvector.begin());
            nvector.insert(nvector.begin(), 0);
        }
    }


    int pls=-1;

    pls= final.generateNumber(nvector);

    cout<<pls;

    return 0;
}

