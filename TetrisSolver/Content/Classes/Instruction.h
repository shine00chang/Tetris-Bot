//
//  Instruction.h
//  TetrisSolver
//
//  Created by shine on 7/1/21.
//

#ifndef Instruction_h
#define Instruction_h

#import <Foundation/Foundation.h>

@interface ObjC_Instruction : NSObject
-(id) init: (int)x :(int)r :(bool)h :(int) spin;
-(int) r;
-(int) x;
-(bool) hold;
-(int) spin;

@end

#endif /* Instruction_h */
