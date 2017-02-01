#include <iostream>
#include <list>
#include <random>

void printList( std::list< int, std::allocator< int>> &shitList );
int getRand( int min, int max );

int main()
{
    auto shitList = std::list< int >{ 0, 10 };
    int min = 0;
    int max = 100;
//    std::rand(see)
    auto randNr = getRand( min, max );
    randNr = getRand( min, max );
    randNr = getRand( min, max );
//    randNr = getRand( min, max );


    auto iter = std::find_if( std::begin( shitList ),
                              std::end( shitList ),
                                [ &randNr ]( int elem ){ return elem > randNr; } );
    std::cout << *iter << "\n";
    shitList.insert( iter, randNr );

    printList( shitList );

    return 0;
}

int getRand( int min, int max )
{ return rand() % ( min - max ) + max; }


void printList( std::list< int, std::allocator< int>> &shitList )
{
    for( const auto &item : shitList )
    {
        if ( item != shitList.front() ) std::__1::cout << ",";
        std::__1::cout << " " << item;
        if ( item == shitList.back() ) std::__1::cout << "\n";

    }
}