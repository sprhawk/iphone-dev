/*
 *     Generated by class-dump 3.1.1.
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2006 by Steve Nygard.
 */

#import <UIKit/UIAnimation.h>

@interface UIZoomAnimation : UIAnimation
{
    float _endScale;
    float _startScale;
    struct CGPoint _endScrollPoint;
    struct CGPoint _startScrollPoint;
}

+ (float)defaultDuration;	// IMP=0x32439928
+ (id)zoomAnimationForTarget:(id)fp8 endScale:(float)fp12 endScrollPoint:(struct CGPoint)fp16;	// IMP=0x32439934
+ (id)zoomAnimationForTarget:(id)fp8 focusRect:(struct CGRect)fp12 deviceBoundaryRect:(struct CGRect)fp28 scale:(float)fp44;	// IMP=0x32439a4c
- (void)setEndScale:(float)fp8;	// IMP=0x32439af8
- (void)setEndScrollPoint:(struct CGPoint)fp8;	// IMP=0x32439b08
- (void)setProgress:(float)fp8;	// IMP=0x32439b20
- (void)setStartScale:(float)fp8;	// IMP=0x32439b00
- (void)setStartScrollPoint:(struct CGPoint)fp8;	// IMP=0x32439b14

@end

