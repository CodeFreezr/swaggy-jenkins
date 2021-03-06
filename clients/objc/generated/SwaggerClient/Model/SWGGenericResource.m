#import "SWGGenericResource.h"

@implementation SWGGenericResource

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"class": @"_class", @"displayName": @"displayName", @"durationInMillis": @"durationInMillis", @"_id": @"id", @"result": @"result", @"startTime": @"startTime" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"class", @"displayName", @"durationInMillis", @"_id", @"result", @"startTime"];
  return [optionalProperties containsObject:propertyName];
}

@end
