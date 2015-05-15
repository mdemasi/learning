//
//  Deck.h
//  matchismo
//
//  Created by Marco de Masi on 5/15/15.
//  Copyright (c) 2015 Marco de Masi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Card.h"

@interface Deck : NSObject

- (void)addCard:(Card *)card atTop:(BOOL)atTop;
- (void)addCard:(Card *)card;

-(Card *)drawRandomCard;

@end
