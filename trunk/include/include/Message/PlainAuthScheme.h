/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/AuthScheme.h>

@interface PlainAuthScheme : AuthScheme
{
}

- (Class)authenticatorClassForAccountClass:(Class)fp8;	// IMP=0x30b9fc21
- (id)authenticatorForAccount:(id)fp8 connection:(id)fp12;	// IMP=0x30b9fc41
- (BOOL)canAuthenticateAccountClass:(Class)fp8 connection:(id)fp12;	// IMP=0x30b9fd51
- (id)humanReadableName;	// IMP=0x30b9fddd
- (id)name;	// IMP=0x30b9fdd1

@end

