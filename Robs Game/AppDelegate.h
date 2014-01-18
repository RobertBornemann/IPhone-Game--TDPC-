//
//  AppDelegate.h
//  Robs Game
//
//  Created by Robert Bornemann on 17.01.14.
//  Copyright (c) 2014 Robert Bornemann. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <AVFoundation/AVFoundation.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate, AVAudioPlayerDelegate> {
    AVAudioPlayer *audioPlayer1;
    }

@property (strong, nonatomic) UIWindow *window;

@end
