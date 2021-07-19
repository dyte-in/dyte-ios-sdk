//
//  DyteMeeting.h
//  dyteClientMobile
//
//  Created by Rohit Bhatia on 07/06/21.
//

#import <Foundation/Foundation.h>

@interface DyteMeetingConfig : NSObject
@property(nonatomic, readwrite) NSString * roomName;
@property(nonatomic, readwrite) NSString *authToken;
@property(nonatomic, assign, readwrite) BOOL autoTune;
@property(nonatomic, readwrite) NSString *apiBase;
@property(nonatomic, readwrite) NSString *orgId;
@property(nonatomic, assign, readwrite) BOOL showSetupScreen;
@property (nonatomic, readwrite) double width;
@property (nonatomic, readwrite) double height;
@end
