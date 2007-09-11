/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <Message/BufferedMessageQueue.h>

@class IMAPConnection, LibraryIMAPStore, NSArray, NSMutableArray, NSRecursiveLock, NSString;

@interface SyncResponseQueue : BufferedMessageQueue
{
    LibraryIMAPStore *_store;
    IMAPConnection *_connection;
    NSString *_url;
    unsigned int _currentUID;
    NSMutableArray *_missingUIDs;
    NSArray *_libraryDetails;
    NSRecursiveLock *_flagChangesLock;
    BOOL _shouldCompact;
    BOOL _shouldFetch;
}

- (BOOL)addItem:(id)fp8;	// IMP=0x30ba46ed
- (void)dealloc;	// IMP=0x30ba4745
- (BOOL)handleItems:(id)fp8;	// IMP=0x30ba42c1
- (id)init;	// IMP=0x30ba4285
- (unsigned int)sizeForItem:(id)fp8;	// IMP=0x30ba42bd

@end

