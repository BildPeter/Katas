//
// Created by Peter A. Kolski on 09.01.18.
// Copyright (c) 2018 Peter Kolski. All rights reserved.
//

import Foundation

func drawPoint( _ p : Point )
{
    print( ".", terminator: "" )
}

class LineToPointAdapter: Sequence
{
    private var count : Int = 0
    var points = [ Point ]()
    init(_ line)
    {
        // stuff
    }

    func makeIterator() -> IndexingIterator<Array<Point>>
    {
        return IndexingIterator( _ elements: points )
    }
}

let vectorObjects = [
    VectorRect( 1, 1, 10, 10 ),
    VectorRect( 3, 3, 6, 6 )
]


func draw()
{
    for vo in vectorObjects
    {
        for line in vo
        {
             let adapter = LineToPointAdapter( line )
            adapter.forEach{ drawPoint( $0 ) }
            // adapter is a sequence, so I can use forEach
            // using the closure syntax
        }
    }
}

func main()
{
    draw()
    draw()

}

// QUESTIONS
/*
    - Sequence class
    - IndexIterator (makeIterator)
    - print( ".", terminator: "")
*/