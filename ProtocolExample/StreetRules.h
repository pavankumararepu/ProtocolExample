//
//  StreetRules.h
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 4/13/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol StreetRules <NSObject>

-(void)goAlwaysSlow;
-(void)takeUTurn;

@required
-(void)followSignal;
-(void)maintainSpeedLimitTo;
-(void)stopDrivingWhenYouSeeRedSignal;

@end
