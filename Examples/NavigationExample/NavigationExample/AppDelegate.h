//
//  AppDelegate.h
//  NavigationExample
//
//  Created by Nick Lockwood on 14/08/2013.
//  Copyright (c) 2013 Charcoal Design. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "OSNavigationController.h"


@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) OSNavigationController *navigationController;

@end
