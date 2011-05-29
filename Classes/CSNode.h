/*
 * cocoshop
 *
 * Copyright (c) 2011 Andrew
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 *
 */

@class CCLayerColor;
@class CCSprite;
@class CCLabelBMFont;

@interface CSNode : CCNode
{
	CCNode *delegate_;
	
	BOOL isLocked_;
	BOOL isSelected_;
	
	CCLayerColor *fill_;
	CCSprite *anchor_;
	CCLabelBMFont *positionLabel_;
	
	NSString *nodeName_;
	BOOL willUpdatePositionLabel_;
}

// changes position and text of positionLabel
// must be called on Cocos2D thread
- (void)updatePositionLabel;

// marks that updatePositionLabel must be called once at next visit
- (void)updatePositionLabelSafely;

@property(nonatomic, retain) CCNode *delegate;
@property(nonatomic, assign) BOOL isSelected;
@property(nonatomic, copy) NSString *nodeName;
@property(nonatomic, assign) BOOL isLocked;
@property(nonatomic, retain) CCLayerColor *fill;
@property(nonatomic, retain) CCSprite *anchor;
@property(nonatomic, retain) CCLabelBMFont *positionLabel;

@end