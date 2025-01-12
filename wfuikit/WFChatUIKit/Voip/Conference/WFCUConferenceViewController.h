//
//  ViewController.h
//  WFDemo
//
//  Created by heavyrain on 17/9/27.
//  Copyright © 2017年 WildFireChat. All rights reserved.
//

#import <UIKit/UIKit.h>

@class WFAVCallSession;
@class WFCCConversation;
@class WFCCConferenceInviteMessageContent;
@interface WFCUConferenceViewController : UIViewController
- (instancetype)initWithSession:(WFAVCallSession *)session;
- (instancetype)initWithInvite:(WFCCConferenceInviteMessageContent *)invite;

- (instancetype)initWithCallId:(NSString *_Nullable)callId
                     audioOnly:(BOOL)audioOnly
                           pin:(NSString *_Nullable)pin
                          host:(NSString *_Nullable)host
                         title:(NSString *_Nullable)title
                          desc:(NSString *_Nullable)desc
                      audience:(BOOL)audience
                       advanced:(BOOL)advance
                        record:(BOOL)record
                        moCall:(BOOL)moCall
                         extra:(NSString *)extra;

- (instancetype)initJoinConference:(NSString *)callId
                     audioOnly:(BOOL)audioOnly
                           pin:(NSString *)pin
                          host:(NSString *)host
                         title:(NSString *)title
                          desc:(NSString *)desc
                      audience:(BOOL)audience
                       advance:(BOOL)advance
                     muteAudio:(BOOL)muteAudio
                     muteVideo:(BOOL)muteVideo
                         extra:(NSString *)extra;
@end

