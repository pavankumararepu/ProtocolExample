//
//  BoatViewController.m
//  ProtocolExample
//
//  Created by Pavankumar Arepu on 4/13/16.
//  Copyright © 2016 PPAM. All rights reserved.
//

#import "BoatViewController.h"

@interface BoatViewController ()

@end

@implementation BoatViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    MotorVehicle *motorVehicleObject = [[MotorVehicle alloc]init];
    
    motorVehicleObject.motorName = @"Honda";
    
    // Do any additional setup after loading the view from its nib.
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)displayBoatModel:(NSString *)model
{
        NSLog(@"MyBoat Model is:%@",model);
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

@end
