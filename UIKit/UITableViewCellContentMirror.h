/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>


@interface UITableViewCellContentMirror : UIView {
	unsigned _selected : 1;
}
@property(assign, nonatomic, getter=isSelected) BOOL selected;
-(id)initWithFrame:(CGRect)frame;
-(id)cell;
-(void)drawRect:(CGRect)rect;
@end

