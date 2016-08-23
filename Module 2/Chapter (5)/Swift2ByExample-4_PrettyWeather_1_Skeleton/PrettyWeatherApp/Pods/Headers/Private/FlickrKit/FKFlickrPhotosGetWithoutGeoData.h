//
//  FKFlickrPhotosGetWithoutGeoData.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosGetWithoutGeoDataError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrPhotosGetWithoutGeoDataError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrPhotosGetWithoutGeoDataError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrPhotosGetWithoutGeoDataError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrPhotosGetWithoutGeoDataError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrPhotosGetWithoutGeoDataError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosGetWithoutGeoDataError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosGetWithoutGeoDataError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosGetWithoutGeoDataError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosGetWithoutGeoDataError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosGetWithoutGeoDataError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosGetWithoutGeoDataError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosGetWithoutGeoDataError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosGetWithoutGeoDataError;

/*

Returns a list of your photos which haven't been geo-tagged.




*/
@interface FKFlickrPhotosGetWithoutGeoData : NSObject <FKFlickrAPIMethod>

/* Maximum upload date. Photos with an upload date less than or equal to this value will be returned. The date should be in the form of a unix timestamp. */
@property (nonatomic, copy) NSString *max_upload_date;

/* Minimum taken date. Photos with an taken date greater than or equal to this value will be returned. The date can be in the form of a mysql datetime or unix timestamp. */
@property (nonatomic, copy) NSString *min_taken_date;

/* Maximum taken date. Photos with an taken date less than or equal to this value will be returned. The date can be in the form of a mysql datetime or unix timestamp. */
@property (nonatomic, copy) NSString *max_taken_date;

/* Return photos only matching a certain privacy level. Valid values are:
<ul>
<li>1 public photos</li>
<li>2 private photos visible to friends</li>
<li>3 private photos visible to family</li>
<li>4 private photos visible to friends &amp; family</li>
<li>5 completely private photos</li>
</ul>
 */
@property (nonatomic, copy) NSString *privacy_filter;

/* The order in which to sort returned photos. Deafults to date-posted-desc. The possible values are: date-posted-asc, date-posted-desc, date-taken-asc, date-taken-desc, interestingness-desc, and interestingness-asc. */
@property (nonatomic, copy) NSString *sort;

/* Filter results by media type. Possible values are <code>all</code> (default), <code>photos</code> or <code>videos</code> */
@property (nonatomic, copy) NSString *media;

/* Minimum upload date. Photos with an upload date greater than or equal to this value will be returned. The date can be in the form of a unix timestamp or mysql datetime. */
@property (nonatomic, copy) NSString *min_upload_date;

/* A comma-delimited list of extra information to fetch for each returned record. Currently supported fields are: <code>description</code>, <code>license</code>, <code>date_upload</code>, <code>date_taken</code>, <code>owner_name</code>, <code>icon_server</code>, <code>original_format</code>, <code>last_update</code>, <code>geo</code>, <code>tags</code>, <code>machine_tags</code>, <code>o_dims</code>, <code>views</code>, <code>media</code>, <code>path_alias</code>, <code>url_sq</code>, <code>url_t</code>, <code>url_s</code>, <code>url_q</code>, <code>url_m</code>, <code>url_n</code>, <code>url_z</code>, <code>url_c</code>, <code>url_l</code>, <code>url_o</code> */
@property (nonatomic, copy) NSString *extras;

/* Number of photos to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;


@end
