//
//  CoreDataTableViewController.h
//  CoreData_test
//
//  Created by 鹏 刘 on 16/9/6.
//  Copyright © 2016年 鹏 刘. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface CoreDataTableViewController : UITableViewController <UITableViewDelegate,UITableViewDataSource>
@property (nonatomic,strong) NSManagedObjectContext *managedObjectContext;

@end
