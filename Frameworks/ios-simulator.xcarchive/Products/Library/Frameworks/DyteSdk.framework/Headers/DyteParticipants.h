//
//  DyteParticipants.h
//  react-native-dyte-mobile
//
//  Created by Rohit Bhatia on 6/28/21.
//

#import <Foundation/Foundation.h>



@interface DyteParticipants : NSObject
//TODO: Why do we have participants as Nonnull here?
@property(nonatomic, readonly) NSMutableArray* _Nonnull participants;
+ (instancetype _Nonnull)sharedInstance;
- (NSInteger)doesParticipantsExist:(NSString*_Nonnull)id;
- (void)setAllValueNil;
@end
