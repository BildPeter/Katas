//
//  main.swift
//  DesignPatternsSwift
//
//  Created by Peter A. Kolski on 26.01.18.
//  Copyright © 2018 Peter Kolski. All rights reserved.
//

import Foundation


enum Option
{
    case eins
    case zwei
}

protocol StrategyBase
{
    init()
    func start()
    func end() -> Int
}

class StrategyOne: StrategyBase
{
    init()
    {
    }

    func start()
    {
    }

    func end() -> Int
    {
    }
}

class StrategyTwo: StrategyBase
{
    init()
    {
    }

    func get() -> Int { return myInt }

    func start()
    { doSomeStuff() }

}

class ProcessorStatic
{
    private var strategy_ : StrategyBase

    init( strategy : StrategyBase )
    {
        strategy_ = strategy
    }

    func doAll()
    {
        strategy_.start()
        print( strategy_.end() )
    }
}