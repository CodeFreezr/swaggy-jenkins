#import <Foundation/Foundation.h>
#import "SWGObject.h"

/**
* Swaggy Jenkins
* Jenkins API clients generated from Swagger / Open API specification
*
* OpenAPI spec version: 0.1.0
* Contact: blah@cliffano.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/





@protocol SWGSwapSpaceMonitorMemoryUsage2
@end

@interface SWGSwapSpaceMonitorMemoryUsage2 : SWGObject


@property(nonatomic) NSString* class;

@property(nonatomic) NSNumber* availablePhysicalMemory;

@property(nonatomic) NSNumber* availableSwapSpace;

@property(nonatomic) NSNumber* totalPhysicalMemory;

@property(nonatomic) NSNumber* totalSwapSpace;

@end
