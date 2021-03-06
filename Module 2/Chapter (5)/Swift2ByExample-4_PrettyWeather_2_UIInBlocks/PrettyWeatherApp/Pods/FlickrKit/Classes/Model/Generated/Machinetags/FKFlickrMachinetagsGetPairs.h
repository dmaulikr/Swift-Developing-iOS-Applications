//
//  FKFlickrMachinetagsGetPairs.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrMachinetagsGetPairsError_NotAValidNamespace = 1,		 /* Missing or invalid namespace argument. */
	FKFlickrMachinetagsGetPairsError_NotAValidPredicate = 2,		 /* Missing or invalid predicate argument. */
	FKFlickrMachinetagsGetPairsError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrMachinetagsGetPairsError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrMachinetagsGetPairsError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrMachinetagsGetPairsError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrMachinetagsGetPairsError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrMachinetagsGetPairsError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrMachinetagsGetPairsError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrMachinetagsGetPairsError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrMachinetagsGetPairsError;

/*

Return a list of unique namespace and predicate pairs, optionally limited by predicate or namespace, in alphabetical order.


Response:

<pairs page="1" total="1228" perpage="500" pages="3">
   <pair namespace="aero" predicate="airline" usage="1093">aero:airline</pair>
   <pair namespace="aero" predicate="icao" usage="4">aero:icao</pair>
   <pair namespace="aero" predicate="model" usage="1026">aero:model</pair>
   <pair namespace="aero" predicate="tail" usage="1048">aero:tail</pair>
</pairs>

*/
@interface FKFlickrMachinetagsGetPairs : NSObject <FKFlickrAPIMethod>

/* Limit the list of pairs returned to those that have the following namespace. */
@property (nonatomic, copy) NSString *namespace;

/* Limit the list of pairs returned to those that have the following predicate. */
@property (nonatomic, copy) NSString *predicate;

/* Number of photos to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;


@end
