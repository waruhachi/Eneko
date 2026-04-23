//
//  CallaLinkCell.h
//  Calla Utils
//
//  Created by Alexandra (@Traurige)
//

#import <Preferences/PSSpecifier.h>
#import <UIKit/UIKit.h>

@interface CallaLinkCell : PSTableCell
@property (nonatomic, retain) UILabel *label;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (nonatomic, retain) UIView *tapRecognizerView;
@property (nonatomic, retain) UITapGestureRecognizer *tap;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *subtitle;
@property (nonatomic, retain) NSString *url;
@end
