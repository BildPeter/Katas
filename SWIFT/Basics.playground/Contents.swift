//: Playground - noun: a place where people can play

import Cocoa

// -------- Type renaming = Type identifier
typealias Point = (Int, Int)
let pos : Point = ( 2, 7 )

// -------- ARRAY
var array : [String] = ["str1", "str2", "str3" ]

if array.contains("str1") {
    print("geil einfach")
} else {
    print("doch nicht")
}

// -------- DICTIONARY
var names = [ 1 : "Peter",  2 : "Marcel" ]
names[1]

// -------- Tuple Type
typealias StateTransition = ( trigger:Int, state:Int )
var stateTrans1 : StateTransition = ( trigger:1, state:7)
var stateTrans2 : StateTransition = ( 0, 3 )

// -------- Optional Type
// -------- Implicitly Unwrapped Optional Type
// -------- Protocol Composition Type

// -------- https://developer.apple.com/library/content/documentation/Swift/Conceptual/Swift_Programming_Language/Types.html#//apple_ref/swift/grammar/tuple-type
