//
//  PlayingCard.h
//  matchismo
//
//  Created by Marco de Masi on 5/15/15.
//  Copyright (c) 2015 Marco de Masi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface PlayingCard : Card

@property (strong, nonatomic) NSString *suit;
@property (nonatomic) NSUInteger rank;

+ (NSArray *)validSuits;
+ (NSUInteger)maxRank;

@end
