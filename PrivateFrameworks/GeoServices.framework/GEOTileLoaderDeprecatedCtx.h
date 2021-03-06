/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class GEOTileKeyList;

__attribute__((visibility("hidden")))
@interface GEOTileLoaderDeprecatedCtx : NSObject
{
    struct __CFRunLoop *_runloop;
    GEOTileKeyList *_originalList;
    GEOTileKeyList *_submittedList;
    GEOTileKeyList *_satisfiedList;
    GEOTileKeyList *_notLoaded;
    id _callback;
    id _progress;
    id _error;
    id _finished;
}

+ (id)ctxWithList:(id)arg1;
@property(readonly, nonatomic) id callback; // @synthesize callback=_callback;
@property(copy, nonatomic) id finished; // @synthesize finished=_finished;
@property(copy, nonatomic) id error; // @synthesize error=_error;
@property(copy, nonatomic) id progress; // @synthesize progress=_progress;
- (void)failure:(const struct _GEOTileKey *)arg1 error:(id)arg2 info:(id)arg3;
- (void)success:(const struct _GEOTileKey *)arg1 tile:(id)arg2 info:(id)arg3;
- (void)breakCycle;
- (void)cancel;
- (void)dealloc;
- (id)initWithList:(id)arg1;

@end

