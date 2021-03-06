//
//  FKFlickrPeopleFindByUsername.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPeopleFindByUsernameError_UserNotFound = 1,		 /* No user with the supplied username was found. */
	FKFlickrPeopleFindByUsernameError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPeopleFindByUsernameError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPeopleFindByUsernameError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPeopleFindByUsernameError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPeopleFindByUsernameError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPeopleFindByUsernameError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPeopleFindByUsernameError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPeopleFindByUsernameError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPeopleFindByUsernameError;

/*

Return a user's NSID, given their username.


Response:

<user nsid="12037949632@N01">
	<username>Stewart</username> 
</user>

*/
@interface FKFlickrPeopleFindByUsername : NSObject <FKFlickrAPIMethod>

/* The username of the user to lookup. */
@property (nonatomic, copy) NSString *username; /* (Required) */


@end
