//
//  NSArray+MASAdditions.h
//  
//
//  Created by Daniel Hammond on 11/26/13.
//
//

#import "MASUtilities.h"
#import "MASConstraintMaker.h"
#import "MASViewAttribute.h"

@interface NSArray (MASAdditions)

/**
 *  Creates a MASConstraintMaker with each view in the callee.
 *  Any constraints defined are added to the view or the appropriate superview once the block has finished executing on each view
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to each view.
 *
 *  @return Array of created MASConstraints
 */
- (NSArray *)mas_makeConstraints:(void(^)(MASConstraintMaker *make))block;

/**
 *  Creates a MASConstraintMaker with each view in the callee.
 *  Any constraints defined are added to each view or the appropriate superview once the block has finished executing on each view.
 *  If an existing constraint exists then it will be updated instead.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to each view.
 *
 *  @return Array of created/updated MASConstraints
 */
- (NSArray *)mas_updateConstraints:(void(^)(MASConstraintMaker *make))block;

/**
 *  Creates a MASConstraintMaker with each view in the callee.
 *  Any constraints defined are added to each view or the appropriate superview once the block has finished executing on each view.
 *  All constraints previously installed for the views will be removed.
 *
 *  @param block scope within which you can build up the constraints which you wish to apply to each view.
 *
 *  @return Array of created/updated MASConstraints
 */
- (NSArray *)mas_remakeConstraints:(void(^)(MASConstraintMaker *make))block;

@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com