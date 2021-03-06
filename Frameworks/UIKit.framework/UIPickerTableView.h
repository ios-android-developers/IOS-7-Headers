/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import <UIKit/UITableView.h>

#import "UITableViewDelegate.h"

@class NSMutableIndexSet, UIColor;

__attribute__((visibility("hidden")))
@interface UIPickerTableView : UITableView <UITableViewDelegate>
{
    struct CGRect _selectionBarRect;
    int _selectionBarRow;
    NSMutableIndexSet *_checkedRows;
    float _lastClickedOffset;
    int _lastSelectedRow;
    BOOL _usesModernStyle;
    UIColor *_textColor;
    struct {
        unsigned int allowsMultipleSelection:1;
        unsigned int scrollingDirection:2;
        unsigned int didSelectDisabled:1;
        unsigned int skipRowChangeNotifications:1;
        unsigned int scrollingForSelection:1;
        unsigned int pickerViewImplementsSelectionBarChanged:2;
        unsigned int cancellingAnimation:1;
    } _pickerTableFlags;
}

@property(nonatomic) int lastSelectedRow; // @synthesize lastSelectedRow=_lastSelectedRow;
@property(nonatomic) struct CGRect selectionBarRect; // @synthesize selectionBarRect=_selectionBarRect;
@property(retain, nonatomic, getter=_textColor, setter=_setTextColor:) UIColor *_textColor;
@property(getter=_usesModernStyle, setter=_setUsesModernStyle:) BOOL _usesModernStyle;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (BOOL)scrollViewShouldScrollToTop:(id)arg1;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)_scrollingFinished;
- (struct CGPoint)contentOffsetForRowAtIndexPath:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(struct CGPoint *)arg3;
- (BOOL)_beginTrackingWithEvent:(id)arg1;
- (BOOL)isRowChecked:(int)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (void)setFrame:(struct CGRect)arg1;
@property(nonatomic) int selectionBarRow; // @synthesize selectionBarRow=_selectionBarRow;
- (void)_setSelectionBarRow:(int)arg1;
- (void)_playClickIfNecessary;
- (id)_containerView;
- (void)_scrollViewAnimationEnded:(id)arg1 finished:(BOOL)arg2;
- (id)_anyDateLabel;
- (void)layoutSubviews;
- (void)setContentOffset:(struct CGPoint)arg1;
- (void)_setContentOffset:(struct CGPoint)arg1 notify:(BOOL)arg2;
- (void)_notifyContentOffsetChange;
- (struct CATransform3D)_transformForCellAtY:(float)arg1;
- (float)_rotationForCellCenterY:(float)arg1;
- (float)_yForY:(float)arg1;
- (float)_distanceToCenterForY:(float)arg1;
- (float)_zForUnitY:(float)arg1;
- (float)_viewYForUnitY:(float)arg1;
- (float)_yRangingFromZeroTo:(float)arg1 forUnitY:(float)arg2;
- (float)_unitYForViewY:(float)arg1;
- (float)_zCoordinateForYCoordinate:(float)arg1;
- (void)_updateContentInsets;
- (void)_rectChangedWithNewSize:(struct CGSize)arg1 oldSize:(struct CGSize)arg2;
- (BOOL)didSelectDisabled:(BOOL)arg1;
- (BOOL)selectRow:(int)arg1 animated:(BOOL)arg2 notify:(BOOL)arg3;
- (id)_checkedRows;
- (BOOL)_scrollRowAtIndexPathToSelectionBar:(id)arg1 animated:(BOOL)arg2;
- (struct CGRect)_selectionBarRectForBounds:(struct CGRect)arg1;
- (void)dealloc;
- (id)_pickerView;
- (id)initWithFrame:(struct CGRect)arg1 style:(int)arg2;

@end

