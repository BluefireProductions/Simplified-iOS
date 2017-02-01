//
//  BCLUrmsInitializer.h
//  BCLUrms
//
//  Created by Shane Meyer on 7/22/16.
//  Copyright © 2016 Bluefire Productions, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface BCLUrmsInitializer : NSObject

+ (void)initializeWithApiKey:(nonnull NSString *)apiKey marlinURL:(nonnull NSString *)marlinURL;

@end
