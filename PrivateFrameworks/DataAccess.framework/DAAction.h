/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCoding.h"

@interface DAAction : NSObject <NSCoding>
{
    int _itemChangeType;
    id _serverId;
    id <NSCoding><NSObject> _changedItem;
    int _changeId;
}

@property int changeId; // @synthesize changeId=_changeId;
@property(readonly, nonatomic) id serverId; // @synthesize serverId=_serverId;
@property(retain, nonatomic) id changedItem; // @synthesize changedItem=_changedItem;
@property(readonly) int itemChangeType; // @synthesize itemChangeType=_itemChangeType;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (id)stringForItemChangeType:(int)arg1;
- (void)_setChangedItem:(id)arg1;
- (id)initWithItemChangeType:(int)arg1 changedItem:(id)arg2 serverId:(id)arg3;
- (void)dealloc;
- (struct ASEvent *)event;
- (id)deletedEventID;
- (struct ASContact *)contact;
- (id)deletedContactID;
- (id)message;
- (struct ASToDo *)toDo;
- (id)deletedToDoID;
- (struct ASNote *)note;
- (id)deletedNoteID;

@end
