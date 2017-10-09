//
//  main.swift
//  StateMachineKata
//
//  Created by Peter A. Kolski on 09.10.17.
//  Copyright © 2017 Peter Kolski. All rights reserved.
//

import Foundation

/*
State
Trigger
Rules
*/

enum State
{
    case sittig
    case standing
    case flying
}

enum Trigger
{
    case beat
    case eat
    case suffer
}

// StateCurrent -> ( Trigger, State )
//: [ State, [(Trigger, State) ] ]
let rules = [
    State.sittig: [ Trigger.beat: State.sittig,
                    Trigger.suffer: State.sittig,
                    Trigger.eat: State.standing ],
    State.standing: [ Trigger.beat: State.sittig,
                      Trigger.suffer: State.sittig,
                      Trigger.eat: State.flying ],
    State.flying: [ Trigger.beat: State.sittig,
                    Trigger.suffer: State.standing,
                    Trigger.eat: State.flying ]
]

class StateMachine
{
    private var mState : State = State.sittig
    private let mRules         = rules

    func changeState( trigger : Trigger )
    {
//        mState = rules[ mState ][trigger]
        mState = rules[ mState ]![trigger]!  //TODO why do they become optionals?
    }

    func printState()
    {
        print( "State is: \( mState )" )
    }
}

func main()
{
    let machine = StateMachine()
    machine.printState()
    machine.changeState( trigger: Trigger.eat )
    machine.printState()
    machine.changeState( trigger: Trigger.eat )
    machine.printState()
    machine.changeState( trigger: Trigger.eat )
    machine.printState()
    machine.changeState( trigger: Trigger.beat )
    machine.printState()
    machine.changeState( trigger: Trigger.beat )
    machine.printState()
}

main()
