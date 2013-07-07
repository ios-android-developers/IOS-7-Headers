/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

#import "TUBacktrace.h"

@class NSArray, NSDictionary;

@interface TUSimpleBacktrace : NSObject <TUBacktrace>
{
    NSArray *_symbolicatedBacktraceStrings;
    NSDictionary *_dyldContext;
    void **_unsymbolicatedBacktrace;
    int _unsymbolicatedBacktraceLength;
    struct _opaque_pthread_mutex_t _symbolicateLock;
    BOOL _shouldSymbolicate;
}

+ (id)dyldContext;
+ (void)_rebuildDyldContext;
@property BOOL shouldSymbolicate; // @synthesize shouldSymbolicate=_shouldSymbolicate;
- (void)dealloc;
@property(readonly) NSDictionary *dyldContext;
@property(readonly) NSArray *symbolicatedBacktraceStrings;
@property(readonly) NSArray *unsymbolicatedBacktraceStrings;
- (void)symbolicate;
- (id)initWithSymbolicatedBacktraceStrings:(id)arg1 dyldContext:(id)arg2;
- (id)initWithExistingBacktrace:(void **)arg1 length:(int)arg2 symbolicateImmediately:(BOOL)arg3;
- (id)initIgnoringTopEntries:(int)arg1 symbolicateImmediately:(BOOL)arg2;
- (id)init;
- (void)_initWithBacktrace:(void **)arg1 length:(int)arg2 ignoreTopEntries:(int)arg3 symbolicateImmediately:(BOOL)arg4;

@end
