/*******************************************************************************
 * Copyright (c) Microsoft Open Technologies, Inc.
 * All Rights Reserved
 * Licensed under the Apache License, Version 2.0.
 * See License.txt in the project root for license information.
 *
 * Warning: This code was generated automatically. Edits will be overwritten.
 * To make changes to this code, please make changes to the generation framework itself:
 * https://github.com/MSOpenTech/odata-codegen
 *******************************************************************************/

/**
* The header for type MSDiscoveryODataReadable.
*/


#import <office365_odata_base/MSDependencyResolver.h>

@protocol MSDiscoveryODataReadable

@optional

-(id<MSDependencyResolver>) getResolver;
-(NSURLSessionDataTask*) oDataExecute:(id<MSODataURL>)path :(NSData *)content :(MSHttpVerb)verb : (void (^)(id<MSResponse>, NSError *))callback;

@required

@property NSString* UrlComponent;
@property id<MSDiscoveryODataReadable> Parent;
-(NSDictionary*)getCustomParameters;
-(void)addCustomParameters : (NSString*)name : (NSString*)value;

@end

@interface MSDiscoveryODataReadable : NSObject<MSDiscoveryODataReadable>

@property NSString* UrlComponent;
@property id<MSDiscoveryODataReadable> Parent;
@property NSMutableDictionary* CustomParameters;

@end
