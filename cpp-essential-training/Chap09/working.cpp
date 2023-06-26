// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <fmt/core.h>
#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <sstream>

using fmt::format;
using std::cout;
using std::vector;
using std::string;
using std::ifstream;
using std::istringstream;

struct Record {
    string sku {};
    string name {};
    string desc {};
};

int main()
{
    vector<Record> records {};

    ifstream infile( "./Chap09/items.txt" );
    string line {};

    while( getline( infile, line ) )
    {
        istringstream iss( line );
        Record r {};
        
        getline( iss, r.sku, '\t' );
        getline( iss, r.name, '\t' );
        getline( iss, r.desc, '\t' );

        records.push_back( r );
    }
    
    for( auto it = records.begin(); it < records.end(); ++it )
    {
        cout << format( "sku: {}, name: {}, desc: {}\n", it->sku, it->name, it->desc );
    }
}
