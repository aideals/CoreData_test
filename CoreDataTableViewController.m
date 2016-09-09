//
//  CoreDataTableViewController.m
//  CoreData_test
//
//  Created by 鹏 刘 on 16/9/6.
//  Copyright © 2016年 鹏 刘. All rights reserved.
//

#import "CoreDataTableViewController.h"

@interface CoreDataTableViewController ()

@end

@implementation CoreDataTableViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
    
    NSError *error;
    
    NSFetchRequest *fetchRequst = [[NSFetchRequest alloc] init];
    NSEntityDescription *entity = [NSEntityDescription entityForName:@"FailedBankInfo" inManagedObjectContext:_managedObjectContext];
    [fetchRequst setEntity:entity];
    self.failedBankInfos = [_managedObjectContext executeFetchRequest:fetchRequst error:&error];
    self.title = @"Failed Banks";
    
}



#pragma mark - Table view data source

- (NSInteger)numberOfSectionsInTableView:(UITableView *)tableView
{

    return 1;
}

- (NSInteger)tableView:(UITableView *)tableView numberOfRowsInSection:(NSInteger)section
{
   return [self.failedBankInfos count];
}



 - (UITableViewCell *)tableView:(UITableView *)tableView cellForRowAtIndexPath:(NSIndexPath *)indexPath
{
     static NSString *identifier = @"cell";
     
     UITableViewCell *cell = [tableView dequeueReusableCellWithIdentifier:identifier];
     FailedBankInfo *info = [self.failedBankInfos objectAtIndex:indexPath.row];
     cell.textLabel.text = info.name;
     cell.detailTextLabel.text = [NSString stringWithFormat:@"%@,%@",info.city,info.state];
    
    return cell;
}

@end
