


#include "ctype.h"

#include<iostream>



char print_bool_x( int boolean )
{
    return boolean ? 'x' : ' ';
}



int main()
{
    for( short ch = 0; ch < 128; ch++ )
    {
        std::cout
            << static_cast<int>( ch ) << '\t'
            << static_cast<char>( ch ) << '\t'
            << print_bool_x( std54321::iscntrl( ch ) ) << " | "
            << print_bool_x( std54321::isblank( ch ) ) << " | "
            << print_bool_x( std54321::isspace( ch ) ) << " | "
            << print_bool_x( std54321::isupper( ch ) ) << " | "
            << print_bool_x( std54321::islower( ch ) ) << " | "
            << print_bool_x( std54321::isalpha( ch ) ) << " | "
            << print_bool_x( std54321::isdigit( ch ) ) << " | "
            << print_bool_x( std54321::isxdigit( ch ) ) << " | "
            << print_bool_x( std54321::isalnum( ch ) ) << " | "
            << print_bool_x( std54321::ispunct( ch ) ) << " | "
            << print_bool_x( std54321::isgraph( ch ) ) << " | "
            << print_bool_x( std54321::isprint( ch ) ) << " |\n";
    }

    return 0;
}