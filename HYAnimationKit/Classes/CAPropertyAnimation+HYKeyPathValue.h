//
//  CAPropertyAnimation+HYKeyPathValue.h
//  StudyAnimation
//
//  Created by ocean on 2018/11/27.
//  Copyright © 2018 ocean. All rights reserved.
//

#import <QuartzCore/QuartzCore.h>

#pragma mark - 平移 Translation
/// x 和 y 轴平移 (NSValue(CGSize))；如果设置为 NSNumber 只会沿着 x 轴平移
extern NSString * const CAPropertyAnimationKeyPathValueForTranslation;
/// x 轴平移 (NSNumber)
extern NSString * const CAPropertyAnimationKeyPathValueForTranslationX;
/// y 轴平移 (NSNumber)
extern NSString * const CAPropertyAnimationKeyPathValueForTranslationY;
/// z 轴平移 (NSNumber)
extern NSString * const CAPropertyAnimationKeyPathValueForTranslationZ;

#pragma mark - 缩放 Scale，通过 `anchorPoint` 属性控制
/// x y z 轴缩放(NSNumber)，正值放大、赋值缩小
extern NSString * const CAPropertyAnimationKeyPathValueForScale;
/// x 轴缩放(NSNumber)，正值放大、赋值缩小
extern NSString * const CAPropertyAnimationKeyPathValueForScaleX;
/// y 轴缩放(NSNumber)，正值放大、赋值缩小
extern NSString * const CAPropertyAnimationKeyPathValueForScaleY;
/// z 轴缩放(NSNumber)，正值放大、赋值缩小
extern NSString * const CAPropertyAnimationKeyPathValueForScaleZ;

#pragma mark - 旋转 Rotation，通过 `anchorPoint` 控制旋转的轴
/// 绕着 x 轴旋转 (NSNumber(M_PI))
extern NSString * const CAPropertyAnimationKeyPathValueForRotationX;
/// 绕着 y 轴旋转 (NSNumber(M_PI))
extern NSString * const CAPropertyAnimationKeyPathValueForRotationY;
/// 绕着 z 轴旋转 (NSNumber(M_PI))
extern NSString * const CAPropertyAnimationKeyPathValueForRotationZ;
/// 绕着 z 轴旋转 (NSNumber(M_PI))
extern NSString * const CAPropertyAnimationKeyPathValueForRotation;

NS_ASSUME_NONNULL_BEGIN

@interface CAPropertyAnimation (HYKeyPathValue)

@end

NS_ASSUME_NONNULL_END
