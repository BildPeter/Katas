#include <iostream>
#include <list>

void    outputListContent( std::list< double, std::allocator< double>> &list );
int     getRandNr( int min, int max );

// =============================================================================

int main()
{
    auto shitList = std::list< double >{ 0, 10, 20 };
    auto max = 100;
    auto min = 0;

    srand( time( NULL ) );


    for ( int i = 0; i < 10; i++ )
    {
        auto randNr = getRandNr( min, max );

        auto mIter = std::find_if( std::begin( shitList ), std::end( shitList ), [&]( int elem ) { return elem > randNr; } );

        if ( mIter != shitList.end() )
            shitList.insert( mIter, randNr );
        else
            shitList.push_back( randNr );

        std::cout << randNr << "\n";
        outputListContent( shitList );
    }

    return 0;
}

// =============================================================================

/// Random number from the STD
/// \param max
/// \param min
/// \return
int getRandNr( int min, int max ) { return rand( ) % ( max - min ) + min; }


/// Print the size and content of the list
/// \param list
void outputListContent( std::list< double, std::allocator< double>> &list )
{
    std::__1::cout << "Size:  " << list.size() << std::__1::endl;
    for ( auto &&item : list )
        {
            if ( item != list.front() )     std::__1::cout << ", ";
            std::__1::cout << item;
        }
    std::__1::cout << "\n\n";
}