//
//  GameViewController.swift
//  FlappySwift
//
//  Created by Giordano Scalzo on 12/10/2015.
//  Copyright (c) 2015 Giordano Scalzo. All rights reserved.
//

import UIKit
import SpriteKit

extension SKNode {
    class func unarchiveFromFile(file : NSString) -> SKNode? {
        if let path = NSBundle.mainBundle().pathForResource(file as String, ofType: "sks") {
            let sceneData = try! NSData(contentsOfFile: path, options: .DataReadingMappedIfSafe)
            let archiver = NSKeyedUnarchiver(forReadingWithData: sceneData)
            
            archiver.setClass(self.classForKeyedUnarchiver(), forClassName: "SKScene")
            let scene = archiver.decodeObjectForKey(NSKeyedArchiveRootObjectKey) as! GameScene
            archiver.finishDecoding()
            return scene
        } else {
            return nil
        }
    }
}

class GameViewController: UIViewController {
    private let skView = SKView()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        skView.frame = view.bounds
        view.addSubview(skView)
        
        if let scene = GameScene.unarchiveFromFile("GameScene") as? GameScene {
            scene.size = skView.frame.size
            skView.showsFPS = true
            skView.showsNodeCount = true
            skView.showsPhysics = true
            
            skView.ignoresSiblingOrder = true
            
            scene.scaleMode = .AspectFill
            
            skView.presentScene(scene)
        }
    }
}