//
//  Solver.h
//  TetrisSolver
//
//  Created by shine on 6/30/21.
//


#ifndef Coordinator_h
#define Coordinator_h

#import <Foundation/Foundation.h>
#import <CoreGraphics/CoreGraphics.h>

#include "../Classes/Bitmap.h"
#include "../Classes/Instruction.h"

@interface ObjC_Coordinator : NSObject
-(id) init: (ObjC_Bitmap*) image windowPos: (CGPoint)windowPos;
-(ObjC_Instruction*) solve;
-(void) update: (ObjC_Bitmap*) bitmap;
-(bool) reset: (ObjC_Bitmap*) bitmap;
-(bool) gameOver;
-(void) set_FindTspins :(bool) input;

@end

#endif /* Coordinator_h */
