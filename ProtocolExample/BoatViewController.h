//
//  BoatViewController.h
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 4/13/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import "MotorVehicle.h"

@interface BoatViewController : MotorVehicle
@property(nonatomic,strong) NSString *boatModelName;
-(void)displayBoatModel:(NSString *)model;

@end
