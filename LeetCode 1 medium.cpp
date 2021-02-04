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

void printGrid(vector<vector<int>> g)
{
    for (int i = 0; i < g.size(); i++)
    {

        printVec(g[i]);
        cout << endl;
    }
}
//Calculate the distance between the current location and the target
int calcDist(vector<int> &origin, vector<int> &target)
{
    int dist;
    //add the x and y distances (x2-x1) + (y2-y1)
    return (abs(target[0] - origin[0]) + abs(target[1] - origin[1]));
}

//Find all the squares that are taken up by possible ghost paths
// vector<vector<int>> badSpots(vector<vector<int>> &ghosts, int &dist)
// {
//     vector<vector<int>> badSpots(0);
//     //for each ghost
//     for (int ghost = 0; ghost < ghosts.size(); ghost++)
//     {
//         //find all possible x values ghost can travel to
//         for (int i = -dist; i <= dist; i++)
//         {
//             int x = ghosts[ghost][0] + i;
//             //cout <<x<<"|";
//             //find all possible y values ghost can travel to GIVEN x
//             for (int j = -dist + abs(i); j <= dist - abs(i); j++)
//             { //add coordinate to badSpots
//                 int y = ghosts[ghost][1] + j;
//                 vector<int> badCoord = {x, y};
//                 badSpots.push_back(badCoord);
//             }
//         }
//     }
//     return badSpots;
// }

bool escapeGhosts(vector<vector<int>> &ghosts, vector<int> &target)
{
    vector<int> startPoint = {0, 0};
    int dist = calcDist(startPoint, target);

    for (int i = 0; i < ghosts.size(); i++)
    {
        if (calcDist(ghosts[i], target) <= dist)
        {
            return false;
        }
    }
    return true;
}

;
int main()
{

    vector<vector<int>> ghosts = {{1, 0}, {0, 3}};
    vector<int> target =  {0, 1};
    if (escapeGhosts(ghosts, target)){
        cout << "true";
    } 
    return 0;
}

// #include <iostream>
// #include <vector>
// class Solution
// {
// public:
//     bool escapeGhosts(vector<vector<int>> &ghosts, vector<int> &target)
//     {
//         int dist = abs(target[0]) + abs(target[1]);
//         for (int i = 0; i < ghosts.size(); i++)
//         {
//             if ((abs(target[0] - ghosts[i][0]) + abs(target[1] - ghosts[i][1])) <= dist)
//             {
//                 return false;
//             }
//         }
//         return true;
//     }
// };