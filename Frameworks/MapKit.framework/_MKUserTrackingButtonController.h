/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class UIActivityIndicatorView, UIButton, UIImageView;

__attribute__((visibility("hidden")))
@interface _MKUserTrackingButtonController : NSObject
{
    id <MKUserTrackingButtonTarget> _target;
    id <MKUserTrackingView> _userTrackingView;
    int _state;
    UIImageView *_imageView;
    UIButton *_button;
    UIActivityIndicatorView *_activityIndicatorView;
}

@property(readonly, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) int state; // @synthesize state=_state;
@property(retain, nonatomic) id <MKUserTrackingView> userTrackingView; // @synthesize userTrackingView=_userTrackingView;
- (void)animationDidStop:(id)arg1 finished:(BOOL)arg2;
- (id)_contentAnimation;
- (id)_expandAnimation;
- (id)_shrinkAnimation;
- (void)_goToNextMode:(id)arg1;
- (void)_updateState;
- (void)_reloadState;
- (id)_imageForState:(int)arg1;
- (BOOL)_shouldAnimateFromState:(int)arg1 toState:(int)arg2;
- (void)_authorizationStatusChanged:(id)arg1;
- (id)_activityIndicatorView;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 userTrackingView:(id)arg2 imageView:(id)arg3 button:(id)arg4;

@end

