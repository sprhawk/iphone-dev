/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/DeliveryAccount.h>

@class NSTimer, SMTPConnection;

@interface SMTPAccount : DeliveryAccount
{
    SMTPConnection *_connection;
    NSTimer *_timer;
    int _lastTimerSetTime;
    unsigned int _supportsPipelining:1;
}

+ (id)accountTypeString;	// IMP=0x30b8e541
+ (id)newDefaultInstance;	// IMP=0x30b8e551
+ (id)saslProfileName;	// IMP=0x30b8e585
- (BOOL)_shouldTryDirectSSLConnectionOnPort:(unsigned int)fp8;	// IMP=0x30b8e9d1
- (unsigned int)alternativeDefaultPortNumber;	// IMP=0x30b8e591
- (id)authenticatedConnection;	// IMP=0x30b8e743
- (void)checkInConnection:(id)fp8;	// IMP=0x30b8e85d
- (Class)connectionClass;	// IMP=0x30b8e5f1
- (void)connectionExpired:(id)fp8;	// IMP=0x30b8e949
- (id)customAuthenticationErrorStringForError:(id)fp8 authScheme:(id)fp12;	// IMP=0x30b8e6dd
- (void)dealloc;	// IMP=0x30b8ebbd
- (unsigned int)defaultPortNumber;	// IMP=0x30b8e575
- (Class)deliveryClass;	// IMP=0x30b8e555
- (void)disconnect:(id)fp8;	// IMP=0x30b8e9a9
- (BOOL)isCommonPortNumber:(unsigned int)fp8;	// IMP=0x30b8e599
- (id)passwordFromKeychain;	// IMP=0x30b8eb1d
- (id)preferredAuthScheme;	// IMP=0x30b8e635
- (void)releaseAllConnections;	// IMP=0x30b8e9e5
- (void)releaseAllForcedConnections;	// IMP=0x30b8ea51
- (id)serviceName;	// IMP=0x30b8e579
- (void)setPasswordInKeychain:(id)fp8;	// IMP=0x30b8ea79
- (void)setPreferredAuthScheme:(id)fp8;	// IMP=0x30b8e699
- (void)setSupportsPipelining:(BOOL)fp8;	// IMP=0x30b8e733
- (void)setTimer;	// IMP=0x30b8e8ed
- (BOOL)supportsPipelining;	// IMP=0x30b8e729

@end

