#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int checker=-1;

class Answer
{
    private:
    int digit=0;
    
    public:
    vector<int> generateVector(long long int n)
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
        int y=x;
        if (x>4 && digit!=1) 
        {
            y=9-x;
        }

        else if (digit==1 && x==9)
        {
            y=9;
        }

        return y;
    }

    long long int generateNumber (vector<int> vec)
    {
        long long int toBeReturned=vec[0];

        for (int i=1; i<digit; i++)
        {
            toBeReturned*=10;
            toBeReturned+=vec[i];
        }

        return toBeReturned;
    }
};

int main()
{
    long long int n;
    cin>>n;
    Answer final;

    vector<int> nvector= final.generateVector(n);

    for (int i=0; i<nvector.size(); i++)
    {
        nvector[i]= final.transformNumber(nvector[i]);
    }

    if (checker==1)
    {
        nvector.erase(nvector.begin());
        nvector.insert(nvector.begin(), 9);
    }

    long long int pls= final.generateNumber(nvector);

    cout<<pls;

    return 0;
}