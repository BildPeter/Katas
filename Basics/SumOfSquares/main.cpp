#include <iostream>

int sum( int i );

int square( int i );

int sum1( const int i );

int main()
{

    const int n = 10;
    std::cout << "n=" << n << "\n";
    for ( int i = 0; i < n; ++i )
    {
        std::cout << "i=" << i << " | sum: " << sum( i ) << " | square: " << square( i ) << std::endl;
        const int sumOfSquare = sum( square( i ) );
        const int SqauerOfSum = square( sum( i ) );
        std::cout << "i=" << i << " | square of sum: " << SqauerOfSum << " | sum of square: " << sumOfSquare
                  << std::endl;
        std::cout << "i=" << i << " diff: " << abs( sumOfSquare - SqauerOfSum ) << "\n";


        const int x = 1;

        std::cout << "Sum1: " << sum1( x ) << "\n";
    }
    

    return 0;
}

int sum1( const int i ) { return i + i; }

int square( int i ) { return i * i; }

int sum( int i ) { return i + i; }