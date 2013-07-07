/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <SAObjects/SABaseClientBoundCommand.h>

@class NSDictionary, NSString, NSURL, SAUIAddViews, SAUIImageResource;

@interface SAUIAppPunchOut : SABaseClientBoundCommand
{
}

+ (id)appPunchOutWithDictionary:(id)arg1 context:(id)arg2;
+ (id)appPunchOut;
- (BOOL)requiresResponse;
@property(copy, nonatomic) NSURL *punchOutUri;
@property(copy, nonatomic) NSString *punchOutName;
@property(copy, nonatomic) NSString *providerId;
@property(copy, nonatomic) NSString *bundleId;
@property(copy, nonatomic) NSURL *appStoreUri;
@property(nonatomic) BOOL appInstalled;
@property(copy, nonatomic) NSDictionary *appIconMap;
@property(retain, nonatomic) SAUIImageResource *appIcon;
@property(copy, nonatomic) NSString *appDisplayName;
@property(retain, nonatomic) SAUIAddViews *alternativePunchOut;
- (id)encodedClassName;
- (id)groupIdentifier;

@end
