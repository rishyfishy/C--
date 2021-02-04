#include <iostream>
#include <vector>
using namespace std;

int max_element(vector<int> b)
{
    int max = b[0];
    for (int i = 0; i < b.size(); i++)
    {
        if (b[i] > max)
        {
            max = b[i];
        }
    }
    return max;
}

int projectionArea(vector<vector<int>> &grid)

{
    int projXY = 0;
    int projXZ = 0;
    int projYZ = 0;

    //calculate projXY
    for (int i = 0; i < grid.size(); i++)
    {
        for (int j = 0; j < grid[i].size(); j++)
        {
            if (grid[i][j] > 0)
            {
                projXY++;
            }
        }
    }

    //Calculate projXZ
    for (int i = 0; i < grid.size(); i++)
    {
        projXZ += max_element(grid[i]);
    }

    //Calculate projYZ
    for (int j = 0; j < grid[0].size(); j++)
    {
        vector<int> temp(grid.size());
        for (int i = 0; i < grid.size(); i++)
        {
            temp[i] = grid[i][j];
        }
        projYZ += max_element(temp);
    }

    //print and add
    cout << projXY << endl
         << projXZ << endl
         << projYZ << endl;

    int yolo = projXY + projXZ;
    return yolo;
}

int main()
{

    vector<vector<int>> vect{{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    cout << projectionArea(vect);
    return 0;
}

// void printVec(vector<int> b)
// {
//     cout << "|";
//     for (int i = 0; i < b.size(); i++)
//     {
//         cout << b[i] << "|";
//     }
// }

// void printGrid(vector<vector<int>> g)
// {
//     for (int i = 0; i < g.size(); i++)
//     {

//         printVec(g[i]);
//         cout<<endl;
//     }
// }

// int min_element(vector<int> b)
// {
//     int min = b[0];
//     for (int i = 0; i < b.size(); i++)
//     {
//         if (b[i] < min)
//         {
//             min = b[i];
//         }
//     }
//     return min;
// }
