// working.cpp by Bill Weinman [bw.org]
// updated 2022-05-21
#include <fmt/core.h>
#include <iostream>

using fmt::format;
using std::cout;

using ISBN10 = char[14];
using ISBN13 = char[18];
using DeweyDecimal = int[2];

struct CatalogCard {
    const char* title {};
    const char* author {};
    const char* publisher {};
    const char* subject {};
    ISBN10 isbn_10 {};
    ISBN13 isbn_13 {};
    int oclc;
    DeweyDecimal dewey_decimal {};
    int year_published {};
    int year_acquired {};
    int quantity {};
};

int main() {
    CatalogCard card {
        "This Book",
        "Tristan Slater",
        "Stuff Inc.",
        "Pet Care",
        "1-23456-789-X",
        "978-3-16-148410-0",
        12345678,
        { 123, 45 },
        1982,
        2023,
        10,
    };

    cout << format( "Title: '{}'\n", card.title );
    cout << format( "Author: '{}'\n", card.author );
    cout << format( "Publisher: '{}'\n", card.publisher );
    cout << format( "Subject: '{}'\n", card.subject );
    cout << format( "ISBN-10: '{}'\n", card.isbn_10 );
    cout << format( "ISBN-13: '{}'\n", card.isbn_13 );
    cout << format( "OCLC: {}\n", card.oclc );
    cout << format( "Dewey Decimal: {}.{}\n", card.dewey_decimal[0], card.dewey_decimal[1] );
    cout << format( "Year Published: {}\n", card.year_published );
    cout << format( "Year Acquired: {}\n", card.year_acquired );
    cout << format( "Quantity in Stock: {}\n", card.quantity );
}
