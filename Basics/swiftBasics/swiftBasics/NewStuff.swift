//
// Created by Peter A. Kolski on 15.01.18.
// Copyright (c) 2018 Peter Kolski. All rights reserved.
//

import Foundation


// Closure in case of switching the bool variable
var showDebugOptions = false {
    didSet {
        if showDebugOptions {
            sceneView.debugOptions = [ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin]
        } else {
            sceneView.debugOptions = []
        }
    }
}