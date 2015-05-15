//
//  Card.h
//  matchismo
//
//  Created by Marco de Masi on 5/15/15.
//  Copyright (c) 2015 Marco de Masi. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Card : NSObject

@property (strong, nonatomic) NSString *contents;

@property (nonatomic, getter=isChosen) BOOL chosen;
@property (nonatomic, getter=isMatched) BOOL matched;

- (int)match:(NSArray *)otherCards;

@end
