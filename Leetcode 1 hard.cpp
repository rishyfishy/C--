#include <iostream>
#include <cstdlib>
#include <array>
#include <vector>

using namespace std;

void printVec(vector<int> b)
{
    cout << "|";
    for (unsigned int i = 0; i < b.size(); i++)
    {
        cout << b[i] << "|";
    }
}

void printGrid(vector<vector<int>> g)
{
    for (unsigned int i = 0; i < g.size(); i++)
    {

        printVec(g[i]);
        cout << endl;
    }
}

int max_element(vector<short> b)
{
    int max = b[0];
    for (unsigned i = 0; i < b.size(); i++)
    {
        if (b[i] > max)
        {
            max = b[i];
        }
    }
    return max;
}

int determineStart(int d, int centre)
{
    if (centre - d < 0)
    {
        return 0;
    }
    else
    {
        return centre - d;
    }
}

int determineEnd(int size, int d, int centre)
{
    if (centre + d > size - 1)
    {
        return size - 1;
    }
    else
    {
        return centre + d;
    }
}

vector<int> makeJumpList(vector<int> arr, int d, int centre)
{
    //Make a list of all the places I can jump to from centre, anywhere between start and end
    //Centre is where you're jumping from
    //start is the lower bound of indices you can jump to
    //end is the upper bound of indices you can jump to
    int size = arr.size();
    int start = determineStart(d, centre);
    int end = determineEnd(size, d, centre);
    vector<int> jumpList;

    //start from the centre
    int curNum = centre;

    //While the previous number is in range and it's less than centre
    while (curNum +2 > start && arr[curNum - 1] < arr[centre])
    {
        //add the previous number to the list
        jumpList.push_back(curNum - 1);
        curNum--;
    }

    //start from the centre again
    curNum = centre;

    //While the next number is in range and it's less than centre
    while (curNum < end && arr[curNum + 1] < arr[centre])
    {
        //add the next number to the list
        jumpList.push_back(curNum + 1);
        curNum++;
    }
    return jumpList;
}

bool noZeroes(vector<short> arr)
{
    const unsigned size = arr.size();
    for (unsigned i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            return false;
        }
    }

    return true;
}

int maxJumps(vector<int> arr, int d)
{
    const int size = arr.size();
    vector<short> rank;
    for (int i = 0; i < size; i++)
    {
        rank.push_back(0);
    }

    vector<vector<int>> jumpLists;
    for (int startPoint = 0; startPoint < size; startPoint++)
    {
        jumpLists.push_back(makeJumpList(arr, d, startPoint));
    }

    //jumplists 2d vector is now complete.
    short level = 1;
    while (!noZeroes(rank))
    {
        for (int i = 0; i < size; i++)
        {
            if (jumpLists[i].size() == 0 && rank[i] == 0)
            {
                rank[i] = level;
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (rank[i] == level)
            {
                for (int j = 0; j < size; j++)
                {
                    for (unsigned k = jumpLists[j].size(); k >= 1; k--)
                    {
                        if (jumpLists[j][k-1] == i)
                        {
                            jumpLists[j].erase(jumpLists[j].begin() + k-1);
                        }
                    }
                }
            }
        }
        level++;
    }
    return max_element(rank);
}

int main()
{
    vector<int> arr = {6, 4, 14, 6, 8, 13, 9, 7, 10, 6, 12};
    int d = 2;
    const int size = arr.size();
    vector<short> rank(size);
    // for (int i = 0; i < size; i++)
    // {
    //     rank.push_back(0);
    // }

    vector<vector<int>> jumpLists;
    for (int startPoint = 0; startPoint < size; startPoint++)
    {
        jumpLists.push_back(makeJumpList(arr, d, startPoint));
    }

    //jumplists 2d vector is now complete.
    short level = 1;
     while (!noZeroes(rank))
    {
        for (int i = 0; i < size; i++)
        {
            if (jumpLists[i].size() == 0)
            {
                if (rank[i] == 0)
                {
                    rank[i] = level;
                }
            }
        }
        for (int i = 0; i < size; i++)
        {
            if (rank[i] == level)
            {
                for (int j = 0; j < size; j++)
                {
                    // unsigned k = 0;
                    // while (k < jumpLists[j].size())
                    // {
                    //     if (jumpLists[j][k] == i)
                    //     {
                    //         jumpLists[j].erase(jumpLists[j].begin() + k);
                    //         k--;
                    //     }
                    //     k++;
                    // }
                    for (unsigned k = jumpLists[j].size(); k >= 1; k--)
                    {
                        if (jumpLists[j][k-1] == i)
                        {
                            jumpLists[j].erase(jumpLists[j].begin() + k-1);
                        }
                    }
                }
            }
        }
        level++;
    }
    cout << max_element(rank);
    return max_element(rank);
}   