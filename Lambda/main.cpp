#include <iostream>
#include <vector>
#include <algorithm>

/*
 * - Lambdas
 * - vector
 * - Add a number to each element
 * -
 */

int main()
{
//    std::vector< double > numberVec( 10, 0 );
//    auto numberVec = std::vector< double >( 10, 0 );
    auto numberVec = std::vector< double >{ };
    numberVec.resize( 10 );
    auto addNummer = 3;

    auto funcAddition = [ addNummer ]( decltype( numberVec )::value_type &elementFromVec ) { elementFromVec += addNummer; };

    std::for_each( std::begin( numberVec ), std::end( numberVec ), funcAddition );

    for ( auto &&item : numberVec )
    {
        std::cout << item << "\n";
    }

    //ampersand

    return 0;
}