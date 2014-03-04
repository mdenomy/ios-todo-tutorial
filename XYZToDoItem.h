//
//  XYZToDoItem.h
//  ToDoList
//
//  Created by Michael Denomy on 3/4/14.
//  Copyright (c) 2014 Michael Denomy. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZToDoItem : NSObject

@property NSString  *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
