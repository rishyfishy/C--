#include<iostream>

using namespace std;

int main()
{
    char letter = 'M';
    cout<< tolower(letter);

    return 0;
}

// char			        1		    –128 to 127 by default 0 to 255 when compiled by using /J
// signed char		    1		    -128 to 127
// unsigned char		1		    0 to 255
// wchar_t, char16_t,	2   		0 to 65,535 (wchar_t & char16_t), 
// and char32_t	        4           0 to 4,294,967,295 (char32_t)