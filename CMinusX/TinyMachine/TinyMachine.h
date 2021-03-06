//
//  TinyMachine.h
//  CMinX
//
//  Created by AquarHEAD L. on 6/6/13.
//  Copyright (c) 2013 Team.TeaWhen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "TMInst.h"
#import "TMStepResult.h"

#define REGS_SIZE 8
#define PC_REG    7

@interface TinyMachine : NSObject 

@property (strong, nonatomic) NSMutableArray *instMem;
@property (strong, nonatomic) NSMutableDictionary *dataMem;
@property (strong, nonatomic) NSArray *input;
@property (strong, nonatomic) NSMutableArray *output;

@property long long lineCount;

- (TMStepResult *)run;
- (TMStepResult *)step;

- (TMInst *)thisInst;
- (TMInst *)nextInst;

- (long long)regContent:(int)index;

- (void)clean;
- (void)fillInstMemWithString:(NSString *)prog;

@end
