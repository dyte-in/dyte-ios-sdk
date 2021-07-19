//
//  DyteSelfParticipant.h
//  DyteMobile
//
//  Created by Rohit Bhatia on 6/24/21.
//  Copyright © 2021 Facebook. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface DyteSelfParticipant : NSObject
    @property(nonatomic, readonly) NSString *name;
    @property(nonatomic, readonly) NSString *id;
    @property(nonatomic, readonly) NSString *picture;
    @property(nonatomic, assign, readonly) BOOL isScreensharing;
    @property(nonatomic, assign, readonly) BOOL isPinned;
    @property(nonatomic, assign, readonly) BOOL videoEnabled;
    @property(nonatomic, assign, readonly) BOOL audioEnabled;

+ (instancetype _Nonnull)sharedInstance;

- (void)toggleAudio;
- (void)toggleVideo;
- (void)selfPin;
- (void)selfUnpin;
- (void)selfScreenSharing;

@end

