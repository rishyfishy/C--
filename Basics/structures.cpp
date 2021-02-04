#include <iostream>

using namespace std;

int main()
{
    //This is similar to creating classes in python (or in C++ for that matter)
    //Notice how you can use this to create "lists" with attributes of different types
    struct player
    {
        string name;
        int age;
        bool isMale;
    };

    player rishy = {"Rishyfishy", 19, true};
    player mihir;
    mihir.name = "MihirG";
    mihir.age = 24;
    mihir.isMale = true;
    cout << rishy.name << " is " << rishy.age << " years old. He is a ";
    if (rishy.isMale)
        cout << "male";

    else
        cout << "female";

    return 0;
}