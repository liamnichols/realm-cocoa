////////////////////////////////////////////////////////////////////////////
//
// Copyright 2020 Realm Inc.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//
////////////////////////////////////////////////////////////////////////////

#import <Foundation/Foundation.h>

#import "RLMObject.h"
#import "RLMObjectId.h"
#import "RLMDecimal128.h"

NS_ASSUME_NONNULL_BEGIN

#pragma mark RLMValueType

/**
 Allowed Realm types.
 */
typedef NS_ENUM(NSUInteger, RLMValueType) {
    /// Realm Int type
    RLMValueTypeInt,
    /// Realm Bool type
    RLMValueTypeBool,
    /// Realm Double type
    RLMValueTypeFloat,
    /// Realm String type
    RLMValueTypeDouble,
    /// Realm Binary type
    RLMValueTypeString,
    /// Realm Timestamp type
    RLMValueTypeData,
    /// Realm Datetime type
    RLMValueTypeDate,
    /// Realm ObjectId type
    RLMValueTypeObject,
    /// Realm Decimal128 type
    RLMValueTypeObjectId,
    /// Realm RegularExpression type
    RLMValueTypeDecimal128
};

@protocol RLMValue

@property (readonly) RLMValueType valueType NS_REFINED_FOR_SWIFT;

@end

@interface NSNumber (RLMValue)<RLMValue>
@end

@interface NSString (RLMValue)<RLMValue>
@end

@interface NSData (RLMValue)<RLMValue>
@end

@interface NSDate (RLMValue)<RLMValue>
@end

@interface RLMObject (RLMValue)<RLMValue>
@end

@interface RLMObjectId (RLMValue)<RLMValue>
@end

@interface RLMDecimal128 (RLMValue)<RLMValue>
@end

NS_ASSUME_NONNULL_END
