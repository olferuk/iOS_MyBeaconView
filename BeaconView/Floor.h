//
//  Room.h
//  BeaconView
//
//  Created by Admin on 18.03.15.
//  Copyright (c) 2015 CSF. All rights reserved.
//

#import <Foundation/Foundation.h>
@import CoreGraphics;

@interface Floor : NSObject

@property (nonatomic, strong) NSMutableArray *rooms; // of Room
//@property (nonatomic, strong) NSMutableArray *beacons; //of Beacon
@property (nonatomic, strong) NSMutableDictionary *beacons;

@property (nonatomic) BOOL canDefineUserPosition;
@property (nonatomic) CGPoint userPosition;
@property (nonatomic, strong) NSMutableArray *userPositions;

@property (nonatomic) CGRect boundingRectangle;
@property (nonatomic) CGRect userRect;
@property (nonatomic) double userProximity;

-(id)initWithRooms:(NSMutableArray *)rooms Beacons:(NSMutableDictionary *)beacons UserPosition:(CGPoint)position;

-(void)didRangeBeacons:(NSArray *)beacons;

@end
