#include <iostream>

using namespace std;
void guide()
{
    // |  Operator	    Description
    // |    +	        addition
    // |    -	        subtraction
    // |    *	        multiplication
    // |    /	        division
    // |    %	        modulo
    // |    ++	        increment by 1
    // |    --      	decrement by 1
    // |    ==  	    equal to
    // |    !=  	    not equal to
    // |    >           greater than
    // |    <	        less than
    // |    >=    	    greater than or equal to
    // |    <=      	less than or equal to
    // |    &&   	    logical AND
    // |    ||	        logical OR
    // |    !	        logical NOT
    // |    +=(y += x)	same as y = y + x
    // |    -=(y -= x)	same as y = y - x
    // |    *=(y *= x)	same as y = y * x
}
int main()
{
    //Read the statement before the question mark
    //if true, evaluates to the thing before the colon
    //if false, evaluates to the thing after the colon
    int i = 1, j = 1;
    cout << (i > j ? i : j) << " is greater than " << (i > j ? j : i) << endl;
}