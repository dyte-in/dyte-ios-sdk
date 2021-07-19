//
//  DyteParticipant.h
//  DyteMobile
//
//  Created by Rohit Bhatia on 6/24/21.
//  Copyright © 2021 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DyteParticipant : NSObject
@property(nonatomic) NSString *name;
@property(nonatomic) NSString *id;
@property(nonatomic) NSString *picture;
@property(nonatomic, assign) BOOL isScreensharing;
@property(nonatomic, assign) BOOL isPinned;
@property(nonatomic, assign) BOOL videoEnabled;
@property(nonatomic, assign) BOOL audioEnabled;
@end

NS_ASSUME_NONNULL_END
