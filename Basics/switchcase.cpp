#include <iostream>
using namespace std;

int main()
{
    short yolo = 5;

    switch (yolo)
    {
    case (1):
        cout << 1;
    case (2):
        cout << 2;
    case (3):
        cout << 3;
    case (4):
        cout << 4;
    case (5):
        cout << 5;
    case (6):
        cout << 6;
    case (7):
        cout << 7;
    case (8):
        cout << 8;
    }
    //Note how all the cases AFTER 6 also run even though you'd think they shouldn't

    // switch (yolo)
    // {
    // case (1):
    //     cout << 1;
    //     break;
    // case (2):
    //     cout << 2;
    //     break;
    // case (3):
    //     cout << 3;
    //     break;
    // case (4):
    //     cout << 4;
    //     break;
    // case (5):
    //     cout << 5;
    //     break;
    // case (6):
    //     cout << 6;
    //     break;
    // case (7):
    //     cout << 7;
    //     break;
    // case (8):
    //     cout << 8;
    //     break;
    // }
    //Using the break statement makes it like a bunch of elif statements

    // switch (yolo)
    // {
    // case (1):
    //     cout << 1;
    //     break;
    // case (2):
    //     cout << 2;
    //     break;
    // case (3):
    //     cout << 3;
    //     break;
    // case (4):
    //     cout << 4;
    //     break;
    // case (5):
    //     cout << 5;
    //     break;
    // case (6):
    //     cout << 6;
    //     break;
    // case (7):
    //     cout << 7;
    //     break;
    // case (8):
    //     cout << 8;
    //     break;
    // default:
    //     cout<<"eyyyy";
    // }
}