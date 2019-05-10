//
//  LCTip.m
//  TipCalculatorApp
//
//  Created by Luiz on 5/10/19.
//  Copyright © 2019 Luiz. All rights reserved.
//

#import "LCTip.h"

@implementation LCTip

- (instancetype)init
{
    self = [super init];
    if (self) {
        _amount = 0;
        _tip = 0;
        _percentage = 0;
    }
    return self;
}

- (double) getTip {
    return self.amount * self.tip;
}
@end
