#include <iostream>

using namespace std;

int main()
{
    //backwards compatible with C language. strings as lists of chars, 
    //with a \0 null character at the end
    char isAString[6] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char isNotAString[5] = {'H', 'e', 'l', 'l', 'o'};
    cout << isAString << endl;
    cout << isNotAString << endl;
    //not backwards compatible with C, but allows fixed with string
    //space must still be left for the inferred null character.
    //Extra space is also filled with null characters
    char ooga[6] = "Hello";

    //Easiest way, requires std namespace
    string yolo = "awadafuke?";
    

}