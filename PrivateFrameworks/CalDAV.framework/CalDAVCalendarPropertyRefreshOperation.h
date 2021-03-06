/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <CalDAV/CalDAVOperation.h>

#import "CoreDAVContainerInfoSyncProvider.h"
#import "CoreDAVContainerInfoTaskGroupDelegate.h"
#import "CoreDAVPropPatchTaskDelegate.h"
#import "CoreDAVTaskGroupDelegate.h"

@class NSError, NSMutableDictionary, NSMutableSet, NSObject<OS_dispatch_group>, NSString;

@interface CalDAVCalendarPropertyRefreshOperation : CalDAVOperation <CoreDAVContainerInfoTaskGroupDelegate, CoreDAVContainerInfoSyncProvider, CoreDAVPropPatchTaskDelegate, CoreDAVTaskGroupDelegate>
{
    NSError *_savedError;
    NSMutableDictionary *_ctags;
    NSMutableDictionary *_syncTokens;
    NSString *_calendarHomeSyncToken;
    BOOL _useCalendarHomeSyncReport;
    NSMutableDictionary *_pathToLocalCalendar;
    NSMutableSet *_localCalendarsWithNoPath;
    BOOL _didFinish;
    BOOL _didMakeCalendars;
    BOOL _isSecondRefresh;
    int _nextCalendarOrder;
    NSObject<OS_dispatch_group> *_outstandingTasksGroup;
}

@property(nonatomic) BOOL useCalendarHomeSyncReport; // @synthesize useCalendarHomeSyncReport=_useCalendarHomeSyncReport;
@property(retain, nonatomic) NSString *calendarHomeSyncToken; // @synthesize calendarHomeSyncToken=_calendarHomeSyncToken;
- (void)containerInfoSyncTask:(id)arg1 completedWithNewSyncToken:(id)arg2 error:(id)arg3;
- (void)containerInfoSyncTask:(id)arg1 retrievedAddedOrModifiedContainers:(id)arg2 removedContainerURLs:(id)arg3;
- (void)containerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (void)_getDefaultCalendarsTasksIfNeededForPrincipal:(id)arg1;
- (id)_getDefaultMkCalendarForPrincipalTask:(id)arg1 isEventCalendar:(BOOL)arg2;
- (void)_continueHandleContainerInfoTask:(id)arg1 completedWithContainers:(id)arg2 error:(id)arg3;
- (BOOL)_handleUpdateForCalendar:(id)arg1;
- (void)_initializePrincipalCalendarCache;
- (id)_getMkcalendarTaskForCalendar:(id)arg1;
- (id)_generateTimeZoneString:(id)arg1;
- (id)_getSetPropertyStringTask:(id)arg1 forName:(id)arg2 andNamespace:(id)arg3 atURL:(id)arg4;
- (int)_sharingStatusForContainer:(id)arg1;
- (void)refreshCalendarProperties;
- (void)_sendShareActionTasks;
- (void)_prepareCalendarsBeforeRefresh;
- (void)_handleCalendarPublish;
- (void)_sendAddsForCalendars;
- (void)_sendDeletesForCalendars;
- (void)_reallyRefreshCalendarProperties;
- (void)_finishRefresh;
- (void)dealloc;
- (id)initWithPrincipal:(id)arg1;

// Remaining properties
@property(nonatomic) id <CalDAVCalendarPropertyRefreshDelegate> delegate; // @dynamic delegate;

@end

