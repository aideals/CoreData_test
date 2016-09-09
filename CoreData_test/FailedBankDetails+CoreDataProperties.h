//
//  FailedBankDetails+CoreDataProperties.h
//  CoreData_test
//
//  Created by 鹏 刘 on 16/9/7.
//  Copyright © 2016年 鹏 刘. All rights reserved.
//
//  Choose "Create NSManagedObject Subclass…" from the Core Data editor menu
//  to delete and recreate this implementation file for your updated model.
//

#import "FailedBankDetails.h"

NS_ASSUME_NONNULL_BEGIN

@interface FailedBankDetails (CoreDataProperties)

@property (nullable, nonatomic, retain) NSNumber *zip;
@property (nullable, nonatomic, retain) NSDate *closeDate;
@property (nullable, nonatomic, retain) NSDate *updateDate;
@property (nullable, nonatomic, retain) FailedBankDetails *info;

@end

NS_ASSUME_NONNULL_END
