#import "Foundation/Foundation.h"

@interface EdgeEnginePlatform : NSObject {
    
}

- (int)startWith:(int)port
           nodeId:(NSString *)nodeId
         nodeName:(NSString *)name
    licenseString:(NSString *)license
 workingDirectory:(NSString *)workingDirectory
startupParameters:(NSDictionary *)startupParameters;

- (void)stop;
- (int)getStatus;

@end
