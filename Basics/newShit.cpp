#include <typeinfo>
#include <iostream>
using namespace std;


/*
 * Complete the 'countingValleys' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER steps
 *  2. STRING path
 */

int countingValleys(int steps, string path) {
    
    int valleyCount = 0;
    int height = 0;
    
    for (int i=0; i<steps; i++)
    {
        char nextStep=path.at(i);
        if (nextStep=='U')
        {
            if (height==-1)
            {
                valleyCount++;
            }
            height++;
        }
        else
        {
            height--;
        }
     }
    return valleyCount;
}

int main(){
    string path = "DUDUDUDU";
    int steps = 8;
    cout<<endl<<countingValleys(steps,path);

    return 0;
}
