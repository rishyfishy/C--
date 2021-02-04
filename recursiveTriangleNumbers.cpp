#include<iostream>
#include<time.h>

using namespace std;

int recursiveTraingle(int n)
{
    if (n==0)
    {
        return 0;
    }
    else
    {
        {
            return n + recursiveTraingle(n-1);
        }
    }
    
}

int main(){
    cout<<recursiveTraingle(5);

}