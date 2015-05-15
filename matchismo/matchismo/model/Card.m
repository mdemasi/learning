//
//  Card.m
//  matchismo
//
//  Created by Marco de Masi on 5/15/15.
//  Copyright (c) 2015 Marco de Masi. All rights reserved.
//

#import "Card.h"

@interface Card()

@end

@implementation Card

- (int)match:(NSArray *)otherCards
{
    int score = 0;
    
    for (Card *card in otherCards) {
        if ([card.contents isEqualToString:self.contents]) {
            score = 1;
        }
    }
    
    return score;
}

@end