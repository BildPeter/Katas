//
//  main.swift
//  ARKit_basics
//
//  Created by Peter A. Kolski on 09.12.17.
//  Copyright © 2017 Peter A. Kolski. All rights reserved.
//

import Foundation
import ARKit
import Vision

ARSCNViewDelegate
ARSessionDelegate

sceneView.delegate = self
sceneView.session.delegate = self
sceneView.showsStatistics = true
sceneView.autoenablesDefaultLighting = true

let conf = ARWorldTrackingConfiguration()
conf.planeDetection = .horizontal
conf.planeDetection = .vertical
conf.isLightEstimationEnabled = true
sceneView.session.run( conf, options: [ .resetTracking, .removeExistingAnchors ] )
sceneView.debugOptions = [ ARSCNDebugOptions.showFeaturePoints, ARSCNDebugOptions.showWorldOrigin ]


ARAnchor
ARFrame

let image = ARReferenceImage()
ARImageAnchor
conf.detectionImages = referenceImages


// SCNKit
var imageHighlightAction : SCNAction
{
    return .sequence( [
                          .wait( duration: 0.25 ),
                          .fadeOpacity( to: 0.85, duration: 0.25 ),
                          .fadeOpacity( to: 0.15, duration: 0.25 ),
                          .fadeOpacity( to: 0.85, duration: 0.25 ),
                          .fadeOut( duration: 0.5 ),
                          .removeFromParentNode()
                      ] )
}