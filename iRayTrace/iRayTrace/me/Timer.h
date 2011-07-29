//
//  Timer.h
//  iRayTrace
//
//  Created by Aaron on 7/29/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#include <mach/mach_time.h>

@interface Timer : NSObject {
@private
    
    //timing stuff
    int ticks;
    uint64_t oldTime;
    double timingFactor;
}


//timing
- (void)tick;
- (void)startTiming;
- (void)endTiming:(NSString*) message;

@end