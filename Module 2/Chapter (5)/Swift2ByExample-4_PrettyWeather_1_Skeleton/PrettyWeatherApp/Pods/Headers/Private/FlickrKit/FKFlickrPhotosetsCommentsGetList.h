//
//  FKFlickrPhotosetsCommentsGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosetsCommentsGetListError_PhotosetNotFound = 1,		 /* The photoset id was invalid. */
	FKFlickrPhotosetsCommentsGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosetsCommentsGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosetsCommentsGetListError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosetsCommentsGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosetsCommentsGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosetsCommentsGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosetsCommentsGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosetsCommentsGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosetsCommentsGetListError;

/*

Returns the comments for a photoset.


Response:

<comments photoset_id="109722179">
    <comment id="6065-109722179-72057594077818641"
         author="35468159852@N01" authorname="Rev Dan Catt" date_create="1141841470"
         permalink="http://www.flickr.com/photos/straup/109722179/#comment72057594077818641"
         >Umm, I'm not sure, can I get back to you on that one?</comment>
</comments>

*/
@interface FKFlickrPhotosetsCommentsGetList : NSObject <FKFlickrAPIMethod>

/* The id of the photoset to fetch comments for. */
@property (nonatomic, copy) NSString *photoset_id; /* (Required) */


@end
