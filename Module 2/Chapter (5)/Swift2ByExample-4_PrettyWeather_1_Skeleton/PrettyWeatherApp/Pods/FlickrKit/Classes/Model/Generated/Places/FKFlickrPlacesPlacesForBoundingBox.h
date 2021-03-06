//
//  FKFlickrPlacesPlacesForBoundingBox.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPlacesPlacesForBoundingBoxError_RequiredParametersMissing = 1,		 /* One or more required parameter is missing from the API call. */
	FKFlickrPlacesPlacesForBoundingBoxError_NotAValidBbox = 2,		 /* The bbox argument was incomplete or incorrectly formatted */
	FKFlickrPlacesPlacesForBoundingBoxError_NotAValidPlaceType = 3,		 /* An invalid place type was included with your request. */
	FKFlickrPlacesPlacesForBoundingBoxError_BoundingBoxExceedsMaximumAllowableSizeForPlaceType = 4,		 /* The bounding box passed along with your request was too large for the request place type. */
	FKFlickrPlacesPlacesForBoundingBoxError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPlacesPlacesForBoundingBoxError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPlacesPlacesForBoundingBoxError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPlacesPlacesForBoundingBoxError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPlacesPlacesForBoundingBoxError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPlacesPlacesForBoundingBoxError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPlacesPlacesForBoundingBoxError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPlacesPlacesForBoundingBoxError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPlacesPlacesForBoundingBoxError;

/*

Return all the locations of a matching place type for a bounding box.<br /><br />

The maximum allowable size of a bounding box (the distance between the SW and NE corners) is governed by the place type you are requesting. Allowable sizes are as follows:

<ul>
<li><strong>neighbourhood</strong>: 3km (1.8mi)</li>
<li><strong>locality</strong>: 7km (4.3mi)</li>
<li><strong>county</strong>: 50km (31mi)</li>
<li><strong>region</strong>: 200km (124mi)</li>
<li><strong>country</strong>: 500km (310mi)</li>
<li><strong>continent</strong>: 1500km (932mi)</li>
</ul>


Response:

<places place_type="neighbourhood" total="21"
   pages="1" page="1" 
   bbox="-122.42307100000001,37.773779,-122.381071,37.815779">
   <place place_id=".aaSwYSbApnq6seyGw" woeid="23512025"
      latitude="37.788" longitude="-122.412" 
      place_url="/United+States/California/San+Francisco/Downtown"
      place_type="neighbourhood">
      Downtown, San Francisco, CA, US, United States
   </place>
   <place place_id="3KymK1GbCZ41eBVBxg" woeid="28288707"
      latitude="37.776" longitude="-122.417" 
      place_url="/United+States/California/San+Francisco/Civic+Center"
      place_type="neighbourhood">
      Civic Center, San Francisco, CA, US, United States
   </place>
   <place place_id="9xdhxY.bAptvBjHo" woeid="2379855"   
      latitude="37.796" longitude="-122.407" 
      place_url="/United+States/California/San+Francisco/Chinatown"
      place_type="neighbourhood">
      Chinatown, San Francisco, CA, US, United States
   </place>
   <!-- and so on -->
</places>

*/
@interface FKFlickrPlacesPlacesForBoundingBox : NSObject <FKFlickrAPIMethod>

/* A comma-delimited list of 4 values defining the Bounding Box of the area that will be searched. The 4 values represent the bottom-left corner of the box and the top-right corner, minimum_longitude, minimum_latitude, maximum_longitude, maximum_latitude. */
@property (nonatomic, copy) NSString *bbox; /* (Required) */

/* The name of place type to using as the starting point to search for places in a bounding box. Valid placetypes are:

<ul>
<li>neighbourhood</li>
<li>locality</li>
<li>county</li>
<li>region</li>
<li>country</li>
<li>continent</li>
</ul>
<br />
<span style="font-style:italic;">The "place_type" argument has been deprecated in favor of the "place_type_id" argument. It won't go away but it will not be added to new methods. A complete list of place type IDs is available using the <a href="http://www.flickr.com/services/api/flickr.places.getPlaceTypes.html">flickr.places.getPlaceTypes</a> method. (While optional, you must pass either a valid place type or place type ID.)</span> */
@property (nonatomic, copy) NSString *place_type;

/* The numeric ID for a specific place type to cluster photos by. <br /><br />

Valid place type IDs are :

<ul>
<li><strong>22</strong>: neighbourhood</li>
<li><strong>7</strong>: locality</li>
<li><strong>8</strong>: region</li>
<li><strong>12</strong>: country</li>
<li><strong>29</strong>: continent</li>
</ul>
<br /><span style="font-style:italic;">(While optional, you must pass either a valid place type or place type ID.)</span>
 */
@property (nonatomic, copy) NSString *place_type_id;


@end
