/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@class CPDistributedNotificationCenter, NSLock;

@interface IAPAudioCallbackInfo : NSObject
{
    void *_deviceStateChangedCallback;
    void *_deviceStateChangedContext;
    void *_volumeChangedCallback;
    void *_volumeChangedContext;
    void *_pauseOnHeadphoneDisconnectChangedCallback;
    void *_pauseOnHeadphoneDisconnectChangedContext;
    void *_volumeControlSupportChangedCallback;
    void *_volumeControlSupportChangedContext;
    CPDistributedNotificationCenter *_dnCenter;
    CPDistributedNotificationCenter *_dnCenteriAP2;
    struct __CFRunLoop *_dnCenterRunLoop;
    NSLock *_lock;
}

+ (id)sharedInstance;
- (void)_volumeControlSupportChanged:(id)arg1;
- (void)_pauseOnHeadphoneDisconnectChanged:(id)arg1;
- (void)_volumeChanged:(id)arg1;
- (void)_deviceStateChanged:(id)arg1;
- (void)startNotificationCenterOnRunLoop:(struct __CFRunLoop *)arg1;
- (void)clearVolumeControlSupportChangedCallback;
- (void)setupVolumeControlSupportChangedCallback:(void *)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearPauseOnHeadphoneDisconnectChangedCallback;
- (void)setupPauseOnHeadphoneDisconnectChangedCallback:(void *)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearVolumeChangedCallback;
- (void)setupVolumeChangedCallback:(void *)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)clearDeviceStateChangedCallback;
- (void)setupDeviceStateChangedCallback:(void *)arg1 withContext:(void *)arg2 andRunLoop:(struct __CFRunLoop *)arg3;
- (void)dealloc;
- (id)init;

@end

