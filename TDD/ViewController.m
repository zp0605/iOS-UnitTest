//
//  ViewController.m
//  TDD
//
//  Created by Rongchang Lei on 7/10/15.
//  Copyright (c) 2015 Rongchang Lei. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (NSString *)reverseString:(NSString *)originalString {
    NSMutableString *reversedString = [NSMutableString stringWithCapacity:[originalString length]];
    
    [originalString enumerateSubstringsInRange:NSMakeRange(0,[originalString length])
                                       options:(NSStringEnumerationReverse | NSStringEnumerationByComposedCharacterSequences)
                                    usingBlock:^(NSString *substring,
                                                 NSRange substringRange,
                                                 NSRange enclosingRange, BOOL *stop) {
                                  
                                        [reversedString appendString:substring];
                              }];
    return reversedString;
}


@end
