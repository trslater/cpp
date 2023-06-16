// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <fmt/core.h>
#include <vector>
#include <iostream>

using fmt::format;
using std::cout;

bool is_prime( int num, std::vector<int>& primes )
{
    for( int prime : primes ) if( num % prime == 0 ) return false;
    
    return true;
}

int main() {
    const int goal {25};
    int count = 1;
    int num = 3;
    std::vector<int> primes {2};

    while( count < goal )
    {
        if( is_prime( num, primes ) ) 
        {
            primes.push_back( num );
            ++count;
        }
        
        ++num;
    }

    for( int prime : primes ) cout << format( "{}\n", prime );
}
