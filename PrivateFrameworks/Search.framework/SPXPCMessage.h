/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSObject<OS_xpc_object>, NSString, SPXPCConnection;

@interface SPXPCMessage : NSObject
{
    SPXPCConnection *_receivingConnection;
    NSString *_name;
    NSDictionary *_info;
    unsigned int _shmemPtr;
    unsigned int _shmemLen;
    NSObject<OS_xpc_object> *_x_reply_connection;
    NSObject<OS_xpc_object> *_x_reply;
}

@property(nonatomic) unsigned int sharedMemoryLength; // @synthesize sharedMemoryLength=_shmemLen;
@property(nonatomic) unsigned int sharedMemoryRegion; // @synthesize sharedMemoryRegion=_shmemPtr;
@property(copy, nonatomic) NSDictionary *info; // @synthesize info=_info;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)needsReply;
- (void)sendReply:(id)arg1;
- (id)_createXPCMessage;
- (id)_initWithXPCMessage:(id)arg1 onConnection:(id)arg2;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

