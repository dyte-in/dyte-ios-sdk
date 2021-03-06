//
//  DyteMeeting.h
//  dyteClientMobile
//
//  Created by Rohit Bhatia on 08/06/21.
//

#import <UIKit/UIKit.h>
#import "DyteMeetingConfig.h"
#import "DyteParticipant.h"

@protocol DyteMeetingViewDelegate <NSObject>

@optional

- (void)meetingConnected;
- (void)meetingDisconnect;
- (void)meetingJoined;
- (void)meetingEnded;
- (void)activeSpeaker:(NSString*)peerId;
- (void)participantLeave:(DyteParticipant*)participant;
- (void)participantJoin:(DyteParticipant*)participant;
- (void)participantUpdate:(DyteParticipant*)participant;

@end



@interface DyteMeetingView : UIView

@property (nonatomic, nullable, weak) id<DyteMeetingViewDelegate> delegate;
- (void)join:(DyteMeetingConfig*)config;
- (void)updateUiConfig:(NSDictionary*)config;
@end


