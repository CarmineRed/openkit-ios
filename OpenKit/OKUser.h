//
//  OKUser.h
//  OKClient
//
//  Created by Suneet Shah on 12/27/12.
//  Copyright (c) 2013 OpenKit. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface OKUser : NSObject

@property (nonatomic, strong) NSNumber *OKUserID;
@property (nonatomic, strong) NSNumber *fbUserID;
@property (nonatomic, strong) NSNumber *twitterUserID;
@property (nonatomic, strong) NSString *userNick;

+ (OKUser*)currentUser;
+ (void)logoutCurrentUserFromOpenKit;

@end
