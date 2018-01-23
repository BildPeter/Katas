//
// Created by Peter A. Kolski on 23.01.18.
// Copyright (c) 2018 Peter Kolski. All rights reserved.
//

import Foundation

enum OutputFormat
{
    case one
    case two
}

protocol MyStrategy
{
    init()
    func start()
    func end() -> Int
}

class StrategyOne : MyStrategy
{
    init() {}
    func start() {}
    func end() -> Int {}
}


// DYNAMIC - At runtime

class ProcessorDynamic
{
    private var strategy_:MyStrategy

    init( format : OutputFormat )
    {
        switch format
        {
            case .one : strategy_ = StrategyOne()
            case .two : strategy_ = StrategyTwo()
        }
    }

    func doAllShit()
    {
        strategy_.start()
        strategy_.end()
    }
}


// STATIC - At compile time
// Usually faster

class ProcessorStatic<MS>
        where MS:MyStrategy
{
    private let strategy_ = MS()

    func doAllShit()
    {
        strategy_.start()
        strategy_.end()
    }
}


func main()
{
    let pro = ProcessorStatic<StrategyOne>()
    pro.doAllShit()
}