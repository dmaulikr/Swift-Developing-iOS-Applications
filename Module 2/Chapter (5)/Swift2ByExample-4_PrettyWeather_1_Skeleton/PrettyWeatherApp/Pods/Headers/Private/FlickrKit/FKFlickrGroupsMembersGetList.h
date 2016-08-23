//
//  FKFlickrGroupsMembersGetList.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrGroupsMembersGetListError_GroupNotFound = 1,		 /*  */
	FKFlickrGroupsMembersGetListError_SSLIsRequired = 95,		 /* SSL is required to access the Flickr API. */
	FKFlickrGroupsMembersGetListError_InvalidSignature = 96,		 /* The passed signature was invalid. */
	FKFlickrGroupsMembersGetListError_MissingSignature = 97,		 /* The call required signing but no signature was sent. */
	FKFlickrGroupsMembersGetListError_LoginFailedOrInvalidAuthToken = 98,		 /* The login details or auth token passed were invalid. */
	FKFlickrGroupsMembersGetListError_UserNotLoggedInOrInsufficientPermissions = 99,		 /* The method requires user authentication but the user was not logged in, or the authenticated method call did not have the required permissions. */
	FKFlickrGroupsMembersGetListError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrGroupsMembersGetListError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrGroupsMembersGetListError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrGroupsMembersGetListError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrGroupsMembersGetListError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrGroupsMembersGetListError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrGroupsMembersGetListError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrGroupsMembersGetListError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrGroupsMembersGetListError;

/*

Get a list of the members of a group.  The call must be signed on behalf of a Flickr member, and the ability to see the group membership will be determined by the Flickr member's group privileges.


Response:

<members page="1" pages="1" perpage="100" total="33">
<member nsid="123456@N01" username="foo" iconserver="1" iconfarm="1" membertype="2"/>
<member nsid="118210@N07" username="kewlchops666" iconserver="0" iconfarm="0" membertype="4"/>
<member nsid="119377@N07" username="Alpha Shanan" iconserver="0" iconfarm="0" membertype="2"/>
<member nsid="67783977@N00" username="fakedunstanp1" iconserver="1003" iconfarm="2" membertype="3"/>
...
</members>

*/
@interface FKFlickrGroupsMembersGetList : NSObject <FKFlickrAPIMethod>

/* Return a list of members for this group.  The group must be viewable by the Flickr member on whose behalf the API call is made. */
@property (nonatomic, copy) NSString *group_id; /* (Required) */

/* Comma separated list of member types
<ul>
<li>2: member</li>
<li>3: moderator</li>
<li>4: admin</li>
</ul>
By default returns all types.  (Returning super rare member type "1: narwhal" isn't supported by this API method) */
@property (nonatomic, copy) NSString *membertypes;

/* Number of members to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;


@end
