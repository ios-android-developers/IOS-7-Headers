/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <MediaPlayer/MPSwipableView.h>

#import "MPDetailSliderDelegate.h"
#import "MPNowPlayingItemQueueInfoButtonDelegate.h"
#import "MPVideoOverlay.h"

@class MPAVController, MPAVItem, MPCenteringNavigationBar, MPDetailSlider, MPNowPlayingItemQueueInfoButton, MPTransportControls, UIImageView, UILabel, UINavigationBar, UINavigationButton, UINavigationItem, UIView;

@interface MPFullScreenVideoOverlay : MPSwipableView <MPDetailSliderDelegate, MPNowPlayingItemQueueInfoButtonDelegate, MPVideoOverlay>
{
    id <MPVideoControllerProtocol> _videoViewController;
    id <MPVideoOverlayDelegate> _delegate;
    MPAVController *_player;
    MPAVItem *_item;
    int _interfaceOrientation;
    MPTransportControls *_transportControls;
    MPNowPlayingItemQueueInfoButton *_itemQueueInfoButton;
    MPCenteringNavigationBar *_navigationBar;
    BOOL _navigationBarHidden;
    UIImageView *_navigationBarBackground;
    UIImageView *_navigationBarShadow;
    UINavigationItem *_navigationItem;
    UINavigationButton *_scaleModeButton;
    UIView *_titleViewContainer;
    UIView *_streamingLoadingTitleView;
    MPDetailSlider *_scrubControl;
    UILabel *_scrubSpeedLabel;
    UILabel *_scrubInstructionsLabel;
    unsigned long long _desiredParts;
    unsigned long long _disabledParts;
    unsigned long long _visibleParts;
    unsigned int _tvOutEnabled:1;
    unsigned int _wantsTick:1;
    unsigned int _allowsDetailScrubbing:1;
    unsigned int _detailScrubbing:1;
}

@property(nonatomic) unsigned long long visibleParts; // @synthesize visibleParts=_visibleParts;
@property(nonatomic) __weak id <MPVideoControllerProtocol> videoViewController; // @synthesize videoViewController=_videoViewController;
@property(readonly, nonatomic) MPTransportControls *transportControls; // @synthesize transportControls=_transportControls;
@property(retain, nonatomic) MPAVController *player; // @synthesize player=_player;
@property(nonatomic) BOOL navigationBarHidden; // @synthesize navigationBarHidden=_navigationBarHidden;
@property(retain, nonatomic) MPAVItem *item; // @synthesize item=_item;
@property(nonatomic) unsigned long long disabledParts; // @synthesize disabledParts=_disabledParts;
@property(nonatomic) unsigned long long desiredParts; // @synthesize desiredParts=_desiredParts;
@property(nonatomic) __weak id <MPVideoOverlayDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_hideScrubInstructions;
- (void)_showScrubInstructions;
- (unsigned long long)_visiblePartsForTransportControlsWithParts:(unsigned long long)arg1;
- (BOOL)_updateTitleViewItemVisibility;
- (BOOL)_shouldShowLoadingTitleView;
- (void)_updateTitleViewItemVisibilityWithAnimation:(BOOL)arg1;
- (id)_scrubControlWithFrame:(struct CGRect)arg1;
- (void)_reloadNavigationBarWithAnimation:(BOOL)arg1;
- (void)_reloadTransportControls:(BOOL)arg1;
- (void)_initNavigationBar;
- (id)_newStreamingTitleViewWithFrame:(struct CGRect)arg1;
- (id)_newLoadingMovieTitleViewWithFrame:(struct CGRect)arg1;
- (id)_newTitleViewWithFrame:(struct CGRect)arg1 text:(id)arg2 showSpinner:(BOOL)arg3;
- (void)detailSlider:(id)arg1 didChangeScrubSpeed:(int)arg2;
- (void)detailSlider:(id)arg1 didChangeValue:(float)arg2;
- (void)detailSliderTrackingDidCancel:(id)arg1;
- (void)detailSliderTrackingDidEnd:(id)arg1;
- (void)detailSliderTrackingDidBegin:(id)arg1;
- (void)_itemTypeAvailable:(id)arg1;
- (void)_videoViewScaleModeDidChangeNotification:(id)arg1;
- (void)_isExternalPlaybackActiveDidChangeNotification:(id)arg1;
- (void)_playbackStateDidChangeNotification:(id)arg1;
- (void)_bufferingStateDidChange:(id)arg1;
- (void)_statusBarHeightChanged:(id)arg1;
- (void)_validityChangedNotification:(id)arg1;
- (void)_timeDidJumpNotification:(id)arg1;
- (void)_tickNotification:(id)arg1;
- (void)_didChangeStatusBarOrientation:(id)arg1;
- (void)_scaleButtonAction:(id)arg1;
- (void)_backButtonAction:(id)arg1;
@property(nonatomic) BOOL allowsDetailScrubbing;
@property(nonatomic) BOOL TVOutEnabled;
- (void)setVisibleParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (void)setInterfaceOrientation:(int)arg1;
- (void)setDesiredParts:(unsigned long long)arg1 animate:(BOOL)arg2;
- (id)viewsToFadeOutWhenShowingBackside;
- (void)crossedTimeMakerWithEvent:(id)arg1;
- (void)_configureLinkButtonForCurrentItemTime;
- (int)nowPlayingItemQueueInfoButton:(id)arg1 willDisplayInfoType:(int)arg2;
- (BOOL)updateTimeBasedValues;
@property(readonly, nonatomic) UINavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void)hideAlternateTracks;
- (void)showAlternateTracks;
@property(nonatomic) BOOL allowsWirelessPlayback;
- (void)setHidden:(BOOL)arg1;
- (void)setAlpha:(float)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)layoutSubviews;
- (void)_initNavigationBarBackground;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)stopTicking;
- (void)startTicking;
- (void)restoreSanity;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 interfaceOrientation:(int)arg2;

@end

