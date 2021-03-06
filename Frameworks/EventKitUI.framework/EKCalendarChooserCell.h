/*
 *     Generated by class-dump 3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2012 by Steve Nygard.
 */

#import "UITableViewCell.h"

@class UIImage, UIImageView, UILabel;

@interface EKCalendarChooserCell : UITableViewCell
{
    BOOL _showCheckmarksOnLeft;
    BOOL _checked;
    BOOL _shouldAnimate;
    BOOL _showsColorDot;
    UIImage *_colorDot;
    UIImage *_colorDotHighlighted;
    UIImageView *_colorDotView;
    UIImageView *_checkmarkView;
    UILabel *_customTitleTextLabel;
    UILabel *_customDetailTextLabel;
}

@property(nonatomic) BOOL showsColorDot; // @synthesize showsColorDot=_showsColorDot;
@property(nonatomic) BOOL shouldAnimate; // @synthesize shouldAnimate=_shouldAnimate;
@property(nonatomic) BOOL checked; // @synthesize checked=_checked;
@property(nonatomic) BOOL showCheckmarksOnLeft; // @synthesize showCheckmarksOnLeft=_showCheckmarksOnLeft;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setColorDotHighlightedImage:(id)arg1;
- (void)setColorDotImage:(id)arg1;
- (void)prepareForReuse;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
- (void)setContentAlpha:(float)arg1;

@end

