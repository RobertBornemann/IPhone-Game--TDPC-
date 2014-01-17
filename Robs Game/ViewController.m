//
//  ViewController.m
//  Robs Game
//
//  Created by Robert Bornemann on 17.01.14.
//  Copyright (c) 2014 Robert Bornemann. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

-(void)HeliMove{
    Heli.center = CGPointMake(Heli.center.x, Heli.center.y + Y);
}

-(void)touchesBegan:(NSSet *)touches withEvent:(UIEvent *)event{

    if (Start == YES){
        Intro1.hidden = YES;
        Intro2.hidden = YES;
        Intro3.hidden = YES;
        
        timer = [NSTimer scheduledTimerWithTimeInterval:0.1 target:self selector:@selector(HeliMove) userInfo:nil repeats:YES];
        
        Start = NO;
        
    }
    
    Y = -7;
    Heli.image = [UIImage imageNamed:@"HELI_UP.png"];

}

-(void)touchesEnded:(NSSet *)touches withEvent:(UIEvent *)event{
    
    Y = 7;
    Heli.image = [UIImage imageNamed:@"HELI_DOWN.png"];
}


- (void)viewDidLoad
{
    Start = YES;
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
