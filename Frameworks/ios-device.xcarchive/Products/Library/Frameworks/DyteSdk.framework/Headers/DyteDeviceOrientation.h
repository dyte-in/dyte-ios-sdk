//
//  DyteDeviceOrientation.h
//  DyteSdk
//
//  Created by Rohit Bhatia on 8/19/21.
//

#import <Foundation/Foundation.h>


NS_ASSUME_NONNULL_BEGIN

@interface DyteDeviceOrientation : NSObject
@property(nonatomic, assign, readonly) BOOL isForcedLandscapeToggled;
@property(nonatomic, assign, readonly) NSNumber* existingOrientation;
+ (instancetype _Nonnull)sharedInstance;
-(void)setAllValueNil;
-(void)gettOrientation;
-(void)setForceLandscape;
@end

NS_ASSUME_NONNULL_END
