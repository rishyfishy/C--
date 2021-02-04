#include <iostream>
#include <vector>
using namespace std;

void printVec(vector<int> b)
{
    cout << "|";
    for (int i = 0; i < b.size(); i++)
    {
        cout << b[i] << "|";
    }
}

void printGrid(vector<vector<int> > g)
{
    for (int i = 0; i < g.size(); i++)
    {
        
        printVec(g[i]);
        cout<<endl;
    }
}

int max_element(vector<int> b)
{
    int max = b[0];
    for (int i=0; i<b.size();i++)
    {
        if (b[i]>max)
        {
            max=b[i];
        }
    }
    return max;
}

int min_element(vector<int> b)
{
    int min = b[0];
    for (int i=0; i<b.size();i++)
    {
        if (b[i]<min)
        {
            min=b[i];
        }
    }
    return min;
}
int main()
{
   	vector<vector<int> > vect{ { 1, 2, 3 }, 
                               { 4, 5, 6 }, 
                               { 7, 8, 9 } };
	
    printGrid(vect);
    return 0;
}
