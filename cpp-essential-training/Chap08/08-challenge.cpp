// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <fmt/core.h>
#include <iostream>

using fmt::format;
using std::cout;

template<typename T>
T factorial( T n )
{
    T product = 1;

    while( n > 1 ) product *= n--;

    return product;
}

int main()
{
    for( int i = 0; i < 10; ++i )
    {
        cout << format( "  Int: {}! = {}\n", i, factorial( i ) );
        cout << format( "Float: {}! = {:.1f}\n", i, factorial( ( double )i ) );
        cout << format( "\n" );
    }
    
    double x { 3.1 };
    cout << format( "Float: {}! = {:.3f}\n", x, factorial( x ) );
}
