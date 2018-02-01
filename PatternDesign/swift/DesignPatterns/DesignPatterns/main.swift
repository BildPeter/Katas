//
//  main.swift
//  DesignPatterns
//
//  Created by Peter A. Kolski on 23.01.18.
//  Copyright © 2018 Peter Kolski. All rights reserved.
//

import Foundation


protocol StrategyBase
{
    init()
    func start()
    func end()
}

class FirstStrategy : StrategyBase
{
    init() {}
    func start() {}
    func end() {}
}

class secondStrategy : StrategyBase
{
    init() {}
    func start() {}
    func end() {}
}


class ProcessStrategies
{
    private var strategy_ : StrategyBase

    init( strategy : StrategyBase )
    {
        strategy_ = strategy
    }

    func doAllShit()
    {
        strategy_.start()
        strategy_.end()
    }
}

class ProcessStrategiesStatic< ST >
        where ST:StrategyBase
{
    private var strategy_ = ST()

    func doSomeShit()
    {
        strategy_.start()
        strategy_.end()
    }
}

