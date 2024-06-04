#include <bits/stdc++.h>
using namespace std;

int main() 
{
int n,m;
cin>>n>>m;
int checker=0;
for(int i=0;i<n;i++)
{
	if(i%2==0)
    {
	    for(int j=0;j<m;j++)
        {
		    cout<<"#";
        }
	}

	else 
        {
		checker++;
		for(int j=0;j<m;j++)
        {
			if(checker%2==1&&j==m-1)    //prints '#' in the last column 
            {
				cout<<"#";
			}
			else if(checker%2==0&&j==0) //prints '#' in the last column
            {
				cout<<"#";
			}
			else 
            {
				cout<<".";
			}
			}
		}
	cout<<"\n";
	}

	return 0;
}