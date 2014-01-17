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

@interface ViewController : UIViewController

{

    IBOutlet UILabel *Intro1;
    IBOutlet UILabel *Intro2;
    IBOutlet UILabel *Intro3;
    
    IBOutlet UIImageView *Heli;
    
    NSTimer *timer;

}
-(void)HeliMove;


@end
