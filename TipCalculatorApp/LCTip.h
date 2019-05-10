//
//  LCTip.h
//  TipCalculatorApp
//
//  Created by Luiz on 5/10/19.
//  Copyright © 2019 Luiz. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface LCTip : NSObject
@property (nonatomic) double amount;
@property (nonatomic, readonly) double tip;
@property (nonatomic) double percentage;
@end

NS_ASSUME_NONNULL_END
