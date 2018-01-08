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
// https://developer.apple.com/library/content/documentation/Swift/Conceptual/Swift_Programming_Language/CollectionTypes.html

// OVERVIEW
/*
Array
Dictionary
set
tuple
enum
optionals
closures
*/


// MARK: - ARRAY

var emptyIntArray = [ Int ]()
emptyIntArray.append( 20 )
emptyIntArray = [] // reset but keeps type Int
emptyIntArray.isEmpty
emptyIntArray.count
emptyIntArray.insert( 7, at: 0 )
emptyIntArray.remove( at: 0 )

var someArray = Array( repeating: 7, count: 3 )
someArray += [ 40 ]

// MARK: - SET

var mSet               = Set<Int>()
var setFromArray : Set = [ "Geil", "Scheisse", "Quark" ]
mSet.insert( 4 )
mSet = []
setFromArray.contains( "Geil" )
//setFromArray.union()
//setFromArray.intersection()
//setFromArray.symmetricDifference()
//setFromArray.subtracting()


// MARK: - DICTIONARY

var emptyDict = [ String: Int ]()
emptyDict[ "eins" ] = 1
emptyDict = [:]

var someDict : [ Float : String ] = [ 1.0: "One", 2.0: "Two", 3.0: "Three" ]

for ( key, value ) in someDict
{
    print( "Dictionary key \( key ) - Dictionary value \( value )" )
}

// MARK: - Tuple
// Like a Struct without methods
let simpleTuple = ( "Hey", 5 )
typealias param = ( text : String, nr : Int )
var tupleArray = [ param ]()
print( simpleTuple.0 )

// MARK: - Enum

enum Schrott: String
{
    case microsoft
    case fiat
}

print( Schrott.microsoft.rawValue )

//Optionals
//Without value
var perhapsInt : Int?

// --- closures
{ ( n1: Int, n2: Int ) -> Int in
    return n1 + n2
}

{( n1, n2) -> Int in
    return n1 + n2
}

{( n1, n2) in n1 + n2}

{ $0 + $1 } // First input multiplied by second input parameter

myFunc( in: 2 ) { // trailing closure
    ( out ) in
    print("geil")
}

// --- Functional
let array = [1, 2, 6 ]
array.map( )
array.reduce()
array.filter()


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


// MARK: - DECISION
var doIt   = true
let choice = doIt ? "Ja" : "Nein"
print( choice )
