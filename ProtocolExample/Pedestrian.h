//
//  Pedestrian.h
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 4/13/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StreetRules.h"

#import "HumanRules.h"

@interface Pedestrian : NSObject<StreetRules,HumanRules>

@end
