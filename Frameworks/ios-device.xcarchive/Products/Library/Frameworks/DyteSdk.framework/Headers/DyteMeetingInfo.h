//
//  DyteMeetingInfo.h
//  DyteMobile
//
//  Created by Rohit Bhatia on 6/24/21.
//  Copyright © 2021 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface DyteMeetingInfo : NSObject
@property(nonatomic, assign, readonly) BOOL meetingJoined;
@property(nonatomic, assign, readonly) BOOL meetingConnected;
@property(nonatomic, assign, readonly) BOOL activeSpeaker;
#pragma mark - This class is a singleton
+ (instancetype _Nonnull)sharedInstance;

@end


NS_ASSUME_NONNULL_END
