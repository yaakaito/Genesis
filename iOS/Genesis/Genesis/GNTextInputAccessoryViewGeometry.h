/* Copyright (c) 2012, individual contributors
 *
 * Permission to use, copy, modify, and/or distribute this software for any
 * purpose with or without fee is hereby granted, provided that the above
 * copyright notice and this permission notice appear in all copies.
 *
 * THE SOFTWARE IS PROVIDED "AS IS" AND THE AUTHOR DISCLAIMS ALL WARRANTIES
 * WITH REGARD TO THIS SOFTWARE INCLUDING ALL IMPLIED WARRANTIES OF
 * MERCHANTABILITY AND FITNESS. IN NO EVENT SHALL THE AUTHOR BE LIABLE FOR
 * ANY SPECIAL, DIRECT, INDIRECT, OR CONSEQUENTIAL DAMAGES OR ANY DAMAGES
 * WHATSOEVER RESULTING FROM LOSS OF USE, DATA OR PROFITS, WHETHER IN AN
 * ACTION OF CONTRACT, NEGLIGENCE OR OTHER TORTIOUS ACTION, ARISING OUT OF
 * OR IN CONNECTION WITH THE USE OR PERFORMANCE OF THIS SOFTWARE.
 */

#import <Foundation/Foundation.h>

// Accessory View

#define kGNTextInputAccessoryViewHeightiPhoneiPod 35
#define kGNTextInputAccessoryViewHeightiPad 70

// Buttons

#define kGNTextInputAccessoryViewButtonWidthiPhoneiPod 60.0
#define kGNTextInputAccessoryViewButtonWidthiPad 90.0
#define kGNTextInputAccessoryViewButtonMargin 3.0

@interface GNTextInputAccessoryViewGeometry : NSObject

+(CGFloat)appropriateViewHeight;
+(CGFloat)appropriateStandardButtonWidth;

@end
