//
//  SampleView.h
//  ObjC_Delegate
//
//  Created by Dunkey on 2013. 10. 30..
//  Copyright (c) 2013년 Dunkey. All rights reserved.
//

#import <UIKit/UIKit.h>

@protocol SampelViewDelegate <NSObject>

- (void)onLikeBtn;
- (void)onHateBtn;
@end

@interface SampleView : UIView <UIGestureRecognizerDelegate>{
    
    IBOutlet UIImageView        *ivLike;
    IBOutlet UIImageView        *ivHate;
    IBOutlet UIButton           *btnLike;
    IBOutlet UIButton           *btnHate;
    
}

@property (nonatomic,weak) id<SampelViewDelegate> delegate;

@property (nonatomic, strong) IBOutlet UIImageView *ivProfile;

-(void)changeLabel:(CGFloat)alpha isLike:(BOOL)isLike;

@end
