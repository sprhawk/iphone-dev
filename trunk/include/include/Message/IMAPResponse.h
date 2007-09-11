/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface IMAPResponse : NSObject
{
    unsigned int _responseType:8;
    NSString *_tag;
    union _IMAPResponseData _data;
}

- (id)capabilities;	// IMP=0x30b52989
- (void)dealloc;	// IMP=0x30b52729
- (id)description;	// IMP=0x30b54145
- (id)fetchResultWithType:(int)fp8;	// IMP=0x30b53211
- (id)fetchResults;	// IMP=0x30b53291
- (id)flags;	// IMP=0x30b52af1
- (id)flagsFetchResult;	// IMP=0x30b53a71
- (id)initWithConnection:(id)fp8;	// IMP=0x30b58351
- (BOOL)isAlertResponse;	// IMP=0x30b526dd
- (BOOL)isUntagged;	// IMP=0x30b526c9
- (unsigned long)mailboxAttributes;	// IMP=0x30b52f81
- (id)mailboxName;	// IMP=0x30b549ed
- (unsigned long)number;	// IMP=0x30b54bb9
- (id)parameters;	// IMP=0x30b53c7d
- (id)quotaRootName;	// IMP=0x30b53579
- (id)quotaRootNames;	// IMP=0x30b533f5
- (id)quotas;	// IMP=0x30b5361d
- (int)responseCode;	// IMP=0x30b52861
- (id)responseInfo;	// IMP=0x30b54ee5
- (id)responseName;	// IMP=0x30b53bdd
- (int)responseType;	// IMP=0x30b526c1
- (id)searchResults;	// IMP=0x30b52e25
- (id)separator;	// IMP=0x30b53029
- (void)setCapabilities:(id)fp8;	// IMP=0x30b52a29
- (void)setFetchResults:(id)fp8;	// IMP=0x30b53335
- (void)setFlags:(id)fp8;	// IMP=0x30b52b95
- (void)setFlagsFetchResult:(id)fp8;	// IMP=0x30b53b15
- (void)setMailboxAttributes:(unsigned long)fp8 separator:(id)fp12 mailboxName:(id)fp16;	// IMP=0x30b53119
- (void)setMailboxName:(id)fp8 quotaRootNames:(id)fp12;	// IMP=0x30b53495
- (void)setMailboxName:(id)fp8 statusEntries:(id)fp12;	// IMP=0x30b52cf5
- (void)setNumber:(unsigned long)fp8;	// IMP=0x30b54b01
- (void)setQuotaRootName:(id)fp8 quotas:(id)fp12;	// IMP=0x30b536c1
- (void)setResponseName:(id)fp8 parameters:(id)fp12;	// IMP=0x30b53d21
- (void)setResponseType:(int)fp8;	// IMP=0x30b526c5
- (void)setSearchResults:(id)fp8;	// IMP=0x30b52ec5
- (void)setTag:(id)fp8;	// IMP=0x30b526fd
- (void)setUidFlagsChange:(int)fp8;	// IMP=0x30b53851
- (void)setUids:(id)fp8;	// IMP=0x30b539a9
- (void)setUserData:(id)fp8 responseCode:(int)fp12 responseInfo:(id)fp16;	// IMP=0x30b54c75
- (id)statusEntries;	// IMP=0x30b52c55
- (id)tag;	// IMP=0x30b526f9
- (int)uidFlagsChange;	// IMP=0x30b537a9
- (id)uids;	// IMP=0x30b53905
- (id)userData;	// IMP=0x30b54de9
- (id)userString;	// IMP=0x30b52915

@end

