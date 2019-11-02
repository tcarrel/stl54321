#ifndef ZZZZZZZZZ__CCTYPE_H
#define ZZZZZZZZZ__CCTYPE_H


    int isalnum( int ch );
    int isalpha( int ch );
    int isblank( int ch );
    int iscntrl( int ch );
    int isdigit( int ch );


    int isgraph( int ch );
    int islower( int ch );
    int isprint( int ch );
    int ispunct( int ch );
    int isspace( int ch );
    int isupper( int ch );
    int isxdigit( int ch );

    int tolower( int ch );
    int toupper( int ch );

    namespace do_not_use
    {
        int isabcdef( int ch );
        int isABCDEF( int ch );

        int isinrange( int min, int ch, int max );
    }



    inline int isalnum( int ch )
    {
        return isalpha( ch ) || isdigit( ch );
    }



    inline int isalpha( int ch )
    {
        return islower( ch ) || isupper( ch );
    }



    inline int isblank( int ch )
    {
        return ch == ' ' || ch == '\t';
    }



    inline int iscntrl( int ch )
    {
        return !isprint( ch );
    }



    inline int isdigit( int ch )
    {
        return do_not_use::isinrange( '0', ch, '9' );
    }



    inline int isgraph( int ch )
    {
        return isdigit( ch ) || isalnum( ch ) || ispunct( ch );
    }



    inline int islower( int ch )
    {
        return do_not_use::isinrange( 'a', ch, 'z' );
    }



    inline int isprint( int ch )
    {
        return ch == ' ' || isgraph( ch );
    }



    inline int ispunct( int ch )
    {
        return
            do_not_use::isinrange( '!', ch, '/' ) ||
            do_not_use::isinrange( ':', ch, '@' ) ||
            do_not_use::isinrange( '[', ch, '`' ) ||
            do_not_use::isinrange( '{', ch, '~' );
    }



    inline int isspace( int ch )
    {
        return isblank( ch ) || ch == '\n' || ch == '\r' || ch == '\f' || ch == '\v';
    }



    inline int isupper( int ch )
    {
        return do_not_use::isinrange( 'A', ch, 'Z' );
    }



    inline int isxdigit( int ch )
    {
        return isdigit( ch ) || do_not_use::isABCDEF( ch ) || do_not_use::isabcdef( ch );
    }



    inline int tolower( int ch )
    {
        return isupper( ch ) ? ch + 0x32 : ch;
    }



    inline int toupper( int ch )
    {
        return islower( ch ) ? ch - 0x32 : ch;
    }




    ///////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////
    ///////////////////////////////////////////////////////////////////////////////////////



    inline int do_not_use::isABCDEF( int ch )
    {
        return do_not_use::isinrange( 'A', ch, 'F' );
    }



    inline int do_not_use::isabcdef( int ch )
    {
        return do_not_use::isinrange( 'a', ch, 'f' );
    }



    inline int do_not_use::isinrange( int min, int ch, int max )
    {
        return min <= ch && ch <= max;
    }







#endif
