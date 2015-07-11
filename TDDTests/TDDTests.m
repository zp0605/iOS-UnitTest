//
//  TDDTests.m
//  TDDTests
//
//  Created by Rongchang Lei on 7/10/15.
//  Copyright (c) 2015 Rongchang Lei. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>

#import "ViewController.h"

@interface TDDTests : XCTestCase

@property (nonatomic)ViewController *vc;

@end

@implementation TDDTests

- (void)setUp {
    [super setUp];
    self.vc = [[ViewController alloc]init];
}

- (void)testReverseString {
    
    NSString *originalString = @"rong";
    NSString *reverseString = [self.vc reverseString: originalString];
    NSString *expectedReversedString = @"gnor";
    XCTAssertEqualObjects(expectedReversedString, reverseString);
    
}



@end
