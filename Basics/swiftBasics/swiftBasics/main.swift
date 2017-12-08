//
//  main.swift
//  swiftBasics
//
//  Created by Peter A. Kolski on 30.11.17.
//  Copyright © 2017 Peter Kolski. All rights reserved.
//

import Foundation

// #################################################################
// ##################### Datatypes #################################
// #################################################################

// MARK: ------------ ARRAYS -----------------------------------
var emptyIntArray = [ Int ]()
emptyIntArray.append( 20 )
emptyIntArray.insert( 7, at: 0 )
emptyIntArray.remove( at: 0 )
emptyIntArray = [] // reset but keeps type Int
emptyIntArray.isEmpty
emptyIntArray.count


var someArray = Array( repeating: 7, count: 3 )
var someVar   = someArray[ 1 ]
print( "Array value: \( someVar )" )
someArray += [ 40 ]

// MARK: ---------- DICTIONARIES -----------------------------

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


// MARK: ------------ DECISION ------------------------------
var doIt   = true
let choice = doIt ? "Ja" : "Nein"
print( choice )


// #################################################################
// ########################### OOP #################################
// #################################################################

class Printer
{
    func printHallo()
    {
        print( "Hallo Peter" )
    }
}

let p = Printer()
p.printHallo()
