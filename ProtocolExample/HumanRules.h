//
//  HumanRules.h
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 4/13/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HumanRules <NSObject>

@required
-(void)giveRespectEachOther;
-(void)doNotSplitOnRoad;
-(void)helpToOthers;

@end
