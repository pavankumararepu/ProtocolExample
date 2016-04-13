//
//  ViewController.h
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 4/13/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface MotorVehicle : UIViewController

@property(nonatomic,strong) NSString *motorName;

-(NSInteger)priceOfMotor:(NSString *)motorName;

@end

