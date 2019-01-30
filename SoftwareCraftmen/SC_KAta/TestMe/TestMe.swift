//
//  TestMe.swift
//  TestMe
//
//  Created by Peter A. Kolski on 29.01.19.
//  Copyright © 2019 Peter Kolski. All rights reserved.
//

import XCTest


class RomanCalculator {
    
    let romanToArabic = [ "I": 1, "V": 5 ]
    
    func convert( from roman:String ) -> Int
    {
        let stringArray = Array( roman )
        
        var value : Int = 0
        for i in 0...roman.count - 1
        {
            value += romanToArabic[ String( stringArray[i] ), default : 0 ]
        }
        
        return value
    }
}


class TestMe: XCTestCase {
    var sut : RomanCalculator!
    
    override func setUp() {
        sut = RomanCalculator()
    }

    override func tearDown() {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
    }

    func test_Roman_To_Arabic_One()
    {
        XCTAssertEqual( 1, sut.convert(from: "I") )
    }
    
    func test_Roman_To_Arabic_Five()
    {
        XCTAssertEqual( 5, sut.convert(from: "V") )
    }

    func test_Two()
    {
        XCTAssertEqual( 2, sut.convert(from: "II") )
    }
    
    func test_Four()
    {
        XCTAssertEqual(4, sut.convert(from: "IV"))
    }

}
