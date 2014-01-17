//
//  ViewController.h
//  Robs Game
//
//  Created by Robert Bornemann on 17.01.14.
//  Copyright (c) 2014 Robert Bornemann. All rights reserved.
//

#import <UIKit/UIKit.h>
int Y;
BOOL Start;
int RandomPosition;

@interface ViewController : UIViewController

{

    IBOutlet UILabel *Intro1;
    IBOutlet UILabel *Intro2;
    IBOutlet UILabel *Intro3;
    
    IBOutlet UIImageView *Heli;
    
    NSTimer *timer;
    
    IBOutlet UIImageView * Obstacle;
    IBOutlet UIImageView * Obstacle2;
    IBOutlet UIImageView * Bottom1;
    IBOutlet UIImageView * Bottom2;
    IBOutlet UIImageView * Bottom3;
    IBOutlet UIImageView * Bottom4;
    IBOutlet UIImageView * Bottom5;
    IBOutlet UIImageView * Bottom6;
    IBOutlet UIImageView * Bottom7;
    IBOutlet UIImageView * Top1;
    IBOutlet UIImageView * Top2;
    IBOutlet UIImageView * Top3;
    IBOutlet UIImageView * Top4;
    IBOutlet UIImageView * Top5;
    IBOutlet UIImageView * Top6;
    IBOutlet UIImageView * Top7;

}
-(void)HeliMove;


@end
