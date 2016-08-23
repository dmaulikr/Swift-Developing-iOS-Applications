//
//  FKFlickrPhotosGeoGetLocation.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosGeoGetLocationError_PhotoNotFound = 1,		 /* The photo id was either invalid or was for a photo not viewable by the calling user. */
	FKFlickrPhotosGeoGetLocationError_PhotoHasNoLocationInformation = 2,		 /* The photo requested has no location data or is not viewable by the calling user. */
	FKFlickrPhotosGeoGetLocationError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosGeoGetLocationError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosGeoGetLocationError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosGeoGetLocationError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosGeoGetLocationError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosGeoGetLocationError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosGeoGetLocationError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosGeoGetLocationError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosGeoGetLocationError;

/*

Get the geo data (latitude and longitude and the accuracy level) for a photo.


Response:

<photo id="123">
        <location latitude="-17.685895" longitude="-63.36914" accuracy="6" />
</photo>

*/
@interface FKFlickrPhotosGeoGetLocation : NSObject <FKFlickrAPIMethod>

/* The id of the photo you want to retrieve location data for. */
@property (nonatomic, copy) NSString *photo_id; /* (Required) */

/* Extra flags. */
@property (nonatomic, copy) NSString *extras;


@end
