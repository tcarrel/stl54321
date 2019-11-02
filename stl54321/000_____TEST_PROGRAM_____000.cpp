


#include "MY_STL.h"

#include<cassert>
#include<iostream>



char print_bool_x( int boolean )
{
    return boolean ? 'x' : ' ';
}



void compare_results( int ch, int ( *stl_func )( int ), int ( *my_func )( int ) )
{
    auto stl = stl_func( ch );
    auto my_ = my_func( ch );

    if( stl == my_ )
    {
        return;
    }

    std::cerr
        << "\tCharacter: ascii( " << ch << ")" << ( isprint( ch ) ? static_cast<char>( ch ) : ' ' )
        << "\n\tSTL version's output: " << stl
        << "\n\t My version's output: " << my_ << '\n';
}



int main()
{
    for( short ch = 0; ch < 128; ch++ )
    {

        assert( iscntrl( ch ) != 0 == std54321::iscntrl( ch ) != 0 );
        assert( isblank( ch ) != 0 == std54321::isblank( ch ) != 0 );
        assert( isspace( ch ) != 0 == std54321::isspace( ch ) != 0 );
        assert( isupper( ch ) != 0 == std54321::isupper( ch ) != 0 );
        assert( islower( ch ) != 0 == std54321::islower( ch ) != 0 );
        assert( isalpha( ch ) != 0 == std54321::isalpha( ch ) != 0 );
        assert( isdigit( ch ) != 0 == std54321::isdigit( ch ) != 0 );
        assert( isxdigit( ch ) != 0 == std54321::isxdigit( ch ) != 0 );
        assert( isalnum( ch ) != 0 == std54321::isalnum( ch ) != 0 );
        assert( ispunct( ch ) != 0 == std54321::ispunct( ch ) != 0 );
        assert( isgraph( ch ) != 0 == std54321::isgraph( ch ) != 0 );
        assert( isprint( ch ) != 0 == std54321::isprint( ch ) != 0 );
    }

    return 0;
}