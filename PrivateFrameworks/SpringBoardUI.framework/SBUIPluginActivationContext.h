/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIScreen;

@interface SBUIPluginActivationContext : NSObject
{
    UIScreen *_screen;
    int _activationEvent;
}

@property(retain, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property(nonatomic) int activationEvent; // @synthesize activationEvent=_activationEvent;
- (void)dealloc;

@end
