/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSAttributedString, NSString;

@interface IMAttributedStringParserContext : NSObject
{
    NSAttributedString *_inString;
}

@property(readonly) NSAttributedString *inString; // @synthesize inString=_inString;
- (id)parser:(id)arg1 preprocessedAttributesForAttributes:(id)arg2 range:(struct _NSRange)arg3;
@property(readonly) BOOL shouldPreprocess;
- (void)parserDidEnd:(id)arg1;
- (void)parser:(id)arg1 foundAttributes:(id)arg2 inRange:(struct _NSRange)arg3;
- (void)parserDidStart:(id)arg1;
@property(readonly) NSArray *resultsForLogging;
@property(readonly) NSString *name;
- (void)dealloc;
- (id)initWithAttributedString:(id)arg1;

@end

