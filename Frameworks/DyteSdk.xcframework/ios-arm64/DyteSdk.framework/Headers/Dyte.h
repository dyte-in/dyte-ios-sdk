//
//  DyteSdk.h
//  dyteClientMobile
//
//  Created by Rohit Bhatia on 6/11/21.
//


@import UIKit;
@import Foundation;

NS_ASSUME_NONNULL_BEGIN

@interface Dyte : NSObject 

#pragma mark - This class is a singleton

+ (instancetype _Nonnull)sharedInstance;

@end

NS_ASSUME_NONNULL_END
