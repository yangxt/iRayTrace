
#ifndef TIMER
#define TIMER

#import <Foundation/Foundation.h>
#import <mach/mach_time.h>

@interface Timer : NSObject {
@private
    
    //timing stuff
    int ticks;
    uint64_t oldTime;
    double timingFactor;
}

@property(nonatomic, readonly) int ticks;

//timing
- (void)tick;
- (void)startTiming;
- (int)endTiming:(NSString*) message;
- (uint64_t) getTime;
@end

#endif