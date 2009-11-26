/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <Foundation/NSObject.h>

@class PLProgressView, NSString, AVRemaker, NSTimer;

@interface PLVideoRemaker : NSObject {
	NSString* _path;
	NSString* _trimmedPath;
	double _duration;
	double _trimStartTime;
	double _trimEndTime;
	int _mode;
	AVRemaker* _remaker;
	float _percentComplete;
	NSTimer* _progressTimer;
	PLProgressView* _progressView;
	id _delegate;
}
+(double)maximumDurationForTrimMode:(int)trimMode;
-(id)initWithPath:(id)path;
// inherited: -(void)dealloc;
-(id)progressView;
-(id)delegate;
-(void)setDelegate:(id)delegate;
-(double)duration;
-(void)setDuration:(double)duration;
-(int)mode;
-(void)setMode:(int)mode;
-(double)trimStartTime;
-(void)setTrimStartTime:(double)time;
-(double)trimEndTime;
-(void)setTrimEndTime:(double)time;
-(void)_resetProgressTimer;
-(void)_removeProgressTimer;
-(void)_updateProgress;
-(void)remake;
-(void)cancel;
-(void)_remakerDidFinish:(id)_remaker;
@end
