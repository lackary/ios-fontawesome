//
//  FAAppDelegate.h
//  FontAwesome-iOS Demo
//
//  Created by Alex Usbergo on 12/30/12.
//  Copyright (c) 2012 Alex Usbergo. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FATableViewController;

@interface FAAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (strong, nonatomic) FATableViewController *tableViewController;

@end
