//
//  FailedBankInfo+CoreDataProperties.h
//  CoreData_test
//
//  Created by 鹏 刘 on 16/9/7.
//  Copyright © 2016年 鹏 刘. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "FailedBankInfo.h"

NS_ASSUME_NONNULL_BEGIN

@interface FailedBankInfo (CoreDataProperties)

@property (nullable, nonatomic, retain) NSString *name;
@property (nullable, nonatomic, retain) NSString *city;
@property (nullable, nonatomic, retain) NSString *state;
@property (nullable, nonatomic, retain) FailedBankDetails *details;

@end

NS_ASSUME_NONNULL_END
