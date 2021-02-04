#include <iostream>
#include <vector>
using namespace std;

void printVic(vector<int> b)
{
    for (unsigned i = 0; i < b.size(); i++)
    {
        cout << b[static_cast<int>(i)] << "|";
    }
}


int max_element(vector<int> b)
{
    int max = b[0];
    for (unsigned i=0; i<b.size();i++)
    {
        if (b[static_cast<int>(i)]>max)
        {
            max=b[i];
        }
    }
    return max;
}

int min_element(vector<int> b)
{
    int min = b[0];
    for (unsigned i=0; i<b.size();i++)
    {
        if (b[static_cast<int>(i)]<min)
        {
            min=b[i];
        }
    }
    return min;
}
int main()
{
   	vector<int> vect{1,1, 3, 1, 2, 1, 3, }, 
	
    printVic(vect);
    return 0;
}
