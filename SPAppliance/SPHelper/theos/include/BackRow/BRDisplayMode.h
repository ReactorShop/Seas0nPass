/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */


@class CADisplayMode;

@interface BRDisplayMode : NSObject {
@private
	CADisplayMode *_displayMode;	// 4 = 0x4
}
@property(readonly, retain) CADisplayMode *displayMode;	// G=0x3166aa65; converted property
- (id)initWithDisplayMode:(id)displayMode;	// 0x3166aba9
- (unsigned long)bitsPerPixel;	// 0x3166aa7d
- (void)dealloc;	// 0x3166ab61
- (id)description;	// 0x3166aad1
// converted property getter: - (id)displayMode;	// 0x3166aa65
- (unsigned long)height;	// 0x3166aa91
- (BOOL)interlaced;	// 0x3166aa81
- (BOOL)isEqual:(id)equal;	// 0x3166aaf1
- (double)refreshRate;	// 0x3166aa85
- (BOOL)safe;	// 0x3166aa75
- (BOOL)safeForHardware;	// 0x3166aa79
- (unsigned long)width;	// 0x3166aab1
@end

