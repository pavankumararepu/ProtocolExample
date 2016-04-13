//
//  CarViewController.h
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 4/13/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import "MotorVehicle.h"
#import "StreetRules.h"
#import "HumanRules.h"

@interface CarViewController : MotorVehicle <StreetRules,HumanRules>

@property(nonatomic,strong) NSString *carModelName;
-(void)dispalyCarModel:(NSString *)model;

@end
