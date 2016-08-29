//
//  UIView+ViewConstraint.h
//  iCocos水平滑动列表
//
//  Created by iCocos on 15/4/24.
//  Copyright (c) 2015年 iCocos . All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIView (ViewConstraint)

- (void)addConstraintHeightWithValue:(CGFloat)heightValue;

- (void)addConstraint:(NSLayoutAttribute )layoutAttribte toItem:(UIView *)toItem withValue:(CGFloat)value;

- (void)addConstraint:(NSLayoutAttribute )layoutAttribte toItem:(UIView *)toItem targetlayoutAttribte:(NSLayoutAttribute )targetlayoutAttribte withValue:(CGFloat)value;

@end
