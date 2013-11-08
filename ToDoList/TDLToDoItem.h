//
//  TDLToDoItem.h
//  ToDoList
//
//  Created by Mac Book on 01/11/13.
//  Copyright (c) 2013 InnoGames. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface TDLToDoItem : NSObject

@property NSString *itemName;
@property BOOL completed;
@property (readonly) NSDate *creationDate;

@end
