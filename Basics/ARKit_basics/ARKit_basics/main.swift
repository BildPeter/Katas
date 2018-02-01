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
conf.isLightEstimationEnabled = true
sceneView.session.run( conf )

ARAnchor
ARFrame

let image  = ARReferenceImage()
ARImageAnchor