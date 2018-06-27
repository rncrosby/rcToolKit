//
//  Object.h
//  toolKit
//
//  Created by Robert Crosby on 6/27/18.
//  Copyright © 2018 Robert Crosby. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface rcToolKit : NSObject {
    UIColor *accentColor;
}

-(id)initInternal;
+(instancetype)initPublic;

// REFERENCES/TOOLS
-(CGFloat)screenWidth;
-(CGFloat)screenHeight;
-(CGFloat)topMargin;
-(CGFloat)bottomMargin;
-(CGFloat)statusBarHeight;
-(UIColor*)accentColor;
-(CGFloat)bottomOfView:(UIView*)view;
-(void)printToConsole:(NSString*)message;

// UIVIEW CREATORS
-(UILabel*)titleLabel:(NSString*)text atY:(CGFloat)y;
-(UILabel*)subtitleLabel:(NSString*)text atY:(CGFloat)y;
-(void)roundCorners:(UIView*)view andRadius:(CGFloat)radius;
-(void)prominentShadow:(UIView*)view;
-(void)normalShadow:(UIView*)view;
-(UIVisualEffectView*)blur:(CGRect)bounds andEffect:(UIBlurEffectStyle)effect;

@end
