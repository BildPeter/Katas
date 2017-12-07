//
//  main.swift
//  swiftBasics
//
//  Created by Peter A. Kolski on 30.11.17.
//  Copyright © 2017 Peter Kolski. All rights reserved.
//

import Foundation

class Printer
{
    func printHallo()
    {
        print( "Hallo Peter" )
    }
}


let p = Printer()

p.printHallo()


// #################################################################
// ##################### Datatypes #################################
// #################################################################

// ---------------------- ARRAYS -----------------------------------
var someArray = [ Int ]( repeating: 7, count: 3 )
var someVar   = someArray[ 1 ]
print( "Array value: \( someVar )" )
//Adding an element
someArray.append( 20 )
someArray += [ 40 ]

// ---------------------- DICTIONARIES -----------------------------

var someDict : [ Float : String ] = [ 1.0: "One", 2.0: "Two", 3.0: "Three" ]
var someVar1                      = someDict[ 2.0 ]
var someVar2                      = someDict[ 1 ]
print( "2.0 = \( someVar1 ) || 1 = \( someVar2 )" )

for ( key, value ) in someDict
{
    print( "Dictionary key \( key ) - Dictionary value \( value )" )
}
someDict.count
someDict.isEmpty

//Enum


//Optionals
//Without value
var perhapsInt : Int?



// -------------------------- DECISION ------------------------------
var doIt   = true
let choice = doIt ? "Ja" : "Nein"
print( choice )

