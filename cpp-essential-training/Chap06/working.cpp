// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <fmt/core.h>
#include <iostream>

using fmt::format;
using std::cout;

int factorial( int n )
{
    int product = 1;

    while( n > 1 ) product *= n--;

    return product;
}

int main()
{
    for( int i = 0; i < 10; ++i )
    {
        cout << format( "{}! = {}\n", i, factorial( i ) );
    }
}
