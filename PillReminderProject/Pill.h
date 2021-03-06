//
//  Pill.h
//  PillReminderProject
//
//  Created by Damir Stuhec on 5/13/12.
//  Copyright (c) 2012 FERI Maribor, Slovenia. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Reminder;

@interface Pill : NSManagedObject

@property (nonatomic, retain) NSString * extra;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSNumber * per_dose;
@property (nonatomic, retain) NSString * side_effects;
@property (nonatomic, retain) NSString * storage;
@property (nonatomic, retain) NSString * strength;
@property (nonatomic, retain) NSString * warnings;
@property (nonatomic, retain) Reminder *whoRemindFor;

@end
