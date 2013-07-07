/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "NSObject.h"

@protocol PLPreheatItemSource <NSObject>
- (id)preheatItemForAsset:(id)arg1;

@optional
- (id)imageDataAtIndex:(unsigned int)arg1 width:(int *)arg2 height:(int *)arg3 bytesPerRow:(int *)arg4 dataWidth:(int *)arg5 dataHeight:(int *)arg6 dataOffset:(int *)arg7;
- (void)preheatImageDataAtIndexes:(id)arg1;
@end
