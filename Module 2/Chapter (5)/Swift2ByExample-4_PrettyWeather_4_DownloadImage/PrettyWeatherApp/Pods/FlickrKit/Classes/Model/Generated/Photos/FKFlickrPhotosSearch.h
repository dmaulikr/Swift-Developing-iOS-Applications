//
//  FKFlickrPhotosSearch.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrPhotosSearchError_TooManyTagsInALLQuery = 1,		 /* When performing an 'all tags' search, you may not specify more than 20 tags to join together. */
	FKFlickrPhotosSearchError_UnknownUser = 2,		 /* A user_id was passed which did not match a valid flickr user. */
	FKFlickrPhotosSearchError_ParameterlessSearchesHaveBeenDisabled = 3,		 /* To perform a search with no parameters (to get the latest public photos, please use flickr.photos.getRecent instead). */
	FKFlickrPhotosSearchError_YouDontHavePermissionToViewThisPool = 4,		 /* The logged in user (if any) does not have permission to view the pool for this group. */
	FKFlickrPhotosSearchError_SorryTheFlickrSearchAPIIsNotCurrentlyAvailable = 10,		 /* The Flickr API search databases are temporarily unavailable. */
	FKFlickrPhotosSearchError_NoValidMachineTags = 11,		 /* The query styntax for the machine_tags argument did not validate. */
	FKFlickrPhotosSearchError_ExceededMaximumAllowableMachineTags = 12,		 /* The maximum number of machine tags in a single query was exceeded. */
	FKFlickrPhotosSearchError_Jump_toNotAvaiableForThisQuery = 13,		 /* jump_to only supported for some query types. */
	FKFlickrPhotosSearchError_BadValueForJump_to = 14,		 /* jump_to must be valid photo ID. */
	FKFlickrPhotosSearchError_PhotoNotFound = 15,		 /*  */
	FKFlickrPhotosSearchError_YouCanOnlySearchWithinYourOwnFavorites = 16,		 /*  */
	FKFlickrPhotosSearchError_YouCanOnlySearchWithinYourOwnContacts = 17,		 /* The call tried to use the contacts parameter with no user ID or a user ID other than that of the authenticated user. */
	FKFlickrPhotosSearchError_IllogicalArguments = 18,		 /* The request contained contradictory arguments. */
	FKFlickrPhotosSearchError_ExcessivePhotoOffsetInSearch = 20,		 /* The search requested photos beyond an allowable offset. Reduce the page number or number of results per page for this search. */
	FKFlickrPhotosSearchError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrPhotosSearchError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrPhotosSearchError_WriteOperationFailed = 106,		 /* The requested operation failed due to a temporary issue. */
	FKFlickrPhotosSearchError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrPhotosSearchError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrPhotosSearchError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrPhotosSearchError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrPhotosSearchError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrPhotosSearchError;

/*

Return a list of photos matching some criteria. Only photos visible to the calling user will be returned. To return private or semi-private photos, the caller must be authenticated with 'read' permissions, and have permission to view the photos. Unauthenticated calls will only return public photos.

Please note that Flickr will return at most the first 4,000 results for any given search query.  If this is an issue, we recommend trying a more specific query.



*/
@interface FKFlickrPhotosSearch : NSObject <FKFlickrAPIMethod>

/* The NSID of the user who's photo to search. If this parameter isn't passed then everybody's public photos will be searched. A value of "me" will search against the calling user's photos for authenticated calls. */
@property (nonatomic, copy) NSString *user_id;

/* A comma-delimited list of tags. Photos with one or more of the tags listed will be returned. You can exclude results that match a term by prepending it with a - character. */
@property (nonatomic, copy) NSString *tags;

/* Either 'any' for an OR combination of tags, or 'all' for an AND combination. Defaults to 'any' if not specified. */
@property (nonatomic, copy) NSString *tag_mode;

/* A free text search. Photos who's title, description or tags contain the text will be returned. You can exclude results that match a term by prepending it with a - character. */
@property (nonatomic, copy) NSString *text;

/* Minimum upload date. Photos with an upload date greater than or equal to this value will be returned. The date can be in the form of a unix timestamp or mysql datetime. */
@property (nonatomic, copy) NSString *min_upload_date;

/* Maximum upload date. Photos with an upload date less than or equal to this value will be returned. The date can be in the form of a unix timestamp or mysql datetime. */
@property (nonatomic, copy) NSString *max_upload_date;

/* Minimum taken date. Photos with an taken date greater than or equal to this value will be returned. The date can be in the form of a mysql datetime or unix timestamp. */
@property (nonatomic, copy) NSString *min_taken_date;

/* Maximum taken date. Photos with an taken date less than or equal to this value will be returned. The date can be in the form of a mysql datetime or unix timestamp. */
@property (nonatomic, copy) NSString *max_taken_date;

/* The license id for photos (for possible values see the flickr.photos.licenses.getInfo method). Multiple licenses may be comma-separated. */
@property (nonatomic, copy) NSString *license;

/* The order in which to sort returned photos. Deafults to date-posted-desc (unless you are doing a radial geo query, in which case the default sorting is by ascending distance from the point specified). The possible values are: date-posted-asc, date-posted-desc, date-taken-asc, date-taken-desc, interestingness-desc, interestingness-asc, and relevance. */
@property (nonatomic, copy) NSString *sort;

/* Return photos only matching a certain privacy level. This only applies when making an authenticated call to view photos you own. Valid values are:
<ul>
<li>1 public photos</li>
<li>2 private photos visible to friends</li>
<li>3 private photos visible to family</li>
<li>4 private photos visible to friends & family</li>
<li>5 completely private photos</li>
</ul>
 */
@property (nonatomic, copy) NSString *privacy_filter;

/* A comma-delimited list of 4 values defining the Bounding Box of the area that will be searched.
<br /><br />
The 4 values represent the bottom-left corner of the box and the top-right corner, minimum_longitude, minimum_latitude, maximum_longitude, maximum_latitude.
<br /><br />
Longitude has a range of -180 to 180 , latitude of -90 to 90. Defaults to -180, -90, 180, 90 if not specified.
<br /><br />
Unlike standard photo queries, geo (or bounding box) queries will only return 250 results per page.
<br /><br />
Geo queries require some sort of limiting agent in order to prevent the database from crying. This is basically like the check against "parameterless searches" for queries without a geo component.
<br /><br />
A tag, for instance, is considered a limiting agent as are user defined min_date_taken and min_date_upload parameters &#8212; If no limiting factor is passed we return only photos added in the last 12 hours (though we may extend the limit in the future). */
@property (nonatomic, copy) NSString *bbox;

/* Recorded accuracy level of the location information.  Current range is 1-16 : 

<ul>
<li>World level is 1</li>
<li>Country is ~3</li>
<li>Region is ~6</li>
<li>City is ~11</li>
<li>Street is ~16</li>
</ul>

Defaults to maximum value if not specified. */
@property (nonatomic, copy) NSString *accuracy;

/* Safe search setting:

<ul>
<li>1 for safe.</li>
<li>2 for moderate.</li>
<li>3 for restricted.</li>
</ul>

(Please note: Un-authed calls can only see Safe content.) */
@property (nonatomic, copy) NSString *safe_search;

/* Content Type setting:
<ul>
<li>1 for photos only.</li>
<li>2 for screenshots only.</li>
<li>3 for 'other' only.</li>
<li>4 for photos and screenshots.</li>
<li>5 for screenshots and 'other'.</li>
<li>6 for photos and 'other'.</li>
<li>7 for photos, screenshots, and 'other' (all).</li>
</ul> */
@property (nonatomic, copy) NSString *content_type;

/* Aside from passing in a fully formed machine tag, there is a special syntax for searching on specific properties :

<ul>
  <li>Find photos using the 'dc' namespace :    <code>"machine_tags" => "dc:"</code></li>

  <li> Find photos with a title in the 'dc' namespace : <code>"machine_tags" => "dc:title="</code></li>

  <li>Find photos titled "mr. camera" in the 'dc' namespace : <code>"machine_tags" => "dc:title=\"mr. camera\"</code></li>

  <li>Find photos whose value is "mr. camera" : <code>"machine_tags" => "*:*=\"mr. camera\""</code></li>

  <li>Find photos that have a title, in any namespace : <code>"machine_tags" => "*:title="</code></li>

  <li>Find photos that have a title, in any namespace, whose value is "mr. camera" : <code>"machine_tags" => "*:title=\"mr. camera\""</code></li>

  <li>Find photos, in the 'dc' namespace whose value is "mr. camera" : <code>"machine_tags" => "dc:*=\"mr. camera\""</code></li>

 </ul>

Multiple machine tags may be queried by passing a comma-separated list. The number of machine tags you can pass in a single query depends on the tag mode (AND or OR) that you are querying with. "AND" queries are limited to (16) machine tags. "OR" queries are limited
to (8). */
@property (nonatomic, copy) NSString *machine_tags;

/* Either 'any' for an OR combination of tags, or 'all' for an AND combination. Defaults to 'any' if not specified. */
@property (nonatomic, copy) NSString *machine_tag_mode;

/* The id of a group who's pool to search.  If specified, only matching photos posted to the group's pool will be returned. */
@property (nonatomic, copy) NSString *group_id;

/* Search your contacts. Either 'all' or 'ff' for just friends and family. (Experimental) */
@property (nonatomic, copy) NSString *contacts;

/* A 32-bit identifier that uniquely represents spatial entities. (not used if bbox argument is present). 
<br /><br />
Geo queries require some sort of limiting agent in order to prevent the database from crying. This is basically like the check against "parameterless searches" for queries without a geo component.
<br /><br />
A tag, for instance, is considered a limiting agent as are user defined min_date_taken and min_date_upload parameters &mdash; If no limiting factor is passed we return only photos added in the last 12 hours (though we may extend the limit in the future). */
@property (nonatomic, copy) NSString *woe_id;

/* A Flickr place id.  (not used if bbox argument is present).
<br /><br />
Geo queries require some sort of limiting agent in order to prevent the database from crying. This is basically like the check against "parameterless searches" for queries without a geo component.
<br /><br />
A tag, for instance, is considered a limiting agent as are user defined min_date_taken and min_date_upload parameters &mdash; If no limiting factor is passed we return only photos added in the last 12 hours (though we may extend the limit in the future). */
@property (nonatomic, copy) NSString *place_id;

/* Filter results by media type. Possible values are <code>all</code> (default), <code>photos</code> or <code>videos</code> */
@property (nonatomic, copy) NSString *media;

/* Any photo that has been geotagged, or if the value is "0" any photo that has <i>not</i> been geotagged.
<br /><br />
Geo queries require some sort of limiting agent in order to prevent the database from crying. This is basically like the check against "parameterless searches" for queries without a geo component.
<br /><br />
A tag, for instance, is considered a limiting agent as are user defined min_date_taken and min_date_upload parameters &mdash; If no limiting factor is passed we return only photos added in the last 12 hours (though we may extend the limit in the future). */
@property (nonatomic, copy) NSString *has_geo;

/* Geo context is a numeric value representing the photo's geotagginess beyond latitude and longitude. For example, you may wish to search for photos that were taken "indoors" or "outdoors". <br /><br />
The current list of context IDs is :<br /><br/>
<ul>
<li><strong>0</strong>, not defined.</li>
<li><strong>1</strong>, indoors.</li>
<li><strong>2</strong>, outdoors.</li>
</ul>
<br /><br />
Geo queries require some sort of limiting agent in order to prevent the database from crying. This is basically like the check against "parameterless searches" for queries without a geo component.
<br /><br />
A tag, for instance, is considered a limiting agent as are user defined min_date_taken and min_date_upload parameters &mdash; If no limiting factor is passed we return only photos added in the last 12 hours (though we may extend the limit in the future). */
@property (nonatomic, copy) NSString *geo_context;

/* A valid latitude, in decimal format, for doing radial geo queries.
<br /><br />
Geo queries require some sort of limiting agent in order to prevent the database from crying. This is basically like the check against "parameterless searches" for queries without a geo component.
<br /><br />
A tag, for instance, is considered a limiting agent as are user defined min_date_taken and min_date_upload parameters &mdash; If no limiting factor is passed we return only photos added in the last 12 hours (though we may extend the limit in the future). */
@property (nonatomic, copy) NSString *lat;

/* A valid longitude, in decimal format, for doing radial geo queries.
<br /><br />
Geo queries require some sort of limiting agent in order to prevent the database from crying. This is basically like the check against "parameterless searches" for queries without a geo component.
<br /><br />
A tag, for instance, is considered a limiting agent as are user defined min_date_taken and min_date_upload parameters &mdash; If no limiting factor is passed we return only photos added in the last 12 hours (though we may extend the limit in the future). */
@property (nonatomic, copy) NSString *lon;

/* A valid radius used for geo queries, greater than zero and less than 20 miles (or 32 kilometers), for use with point-based geo queries. The default value is 5 (km). */
@property (nonatomic, copy) NSString *radius;

/* The unit of measure when doing radial geo queries. Valid options are "mi" (miles) and "km" (kilometers). The default is "km". */
@property (nonatomic, copy) NSString *radius_units;

/* Limit the scope of the search to only photos that are part of the <a href="http://flickr.com/commons">Flickr Commons project</a>. Default is false. */
@property (nonatomic, copy) NSString *is_commons;

/* Limit the scope of the search to only photos that are in a <a href="http://www.flickr.com/help/galleries/">gallery</a>?  Default is false, search all photos. */
@property (nonatomic, copy) NSString *in_gallery;

/* Limit the scope of the search to only photos that are for sale on Getty. Default is false. */
@property (nonatomic, copy) NSString *is_getty;

/* A comma-delimited list of extra information to fetch for each returned record. Currently supported fields are: <code>description</code>, <code>license</code>, <code>date_upload</code>, <code>date_taken</code>, <code>owner_name</code>, <code>icon_server</code>, <code>original_format</code>, <code>last_update</code>, <code>geo</code>, <code>tags</code>, <code>machine_tags</code>, <code>o_dims</code>, <code>views</code>, <code>media</code>, <code>path_alias</code>, <code>url_sq</code>, <code>url_t</code>, <code>url_s</code>, <code>url_q</code>, <code>url_m</code>, <code>url_n</code>, <code>url_z</code>, <code>url_c</code>, <code>url_l</code>, <code>url_o</code> */
@property (nonatomic, copy) NSString *extras;

/* Number of photos to return per page. If this argument is omitted, it defaults to 100. The maximum allowed value is 500. */
@property (nonatomic, copy) NSString *per_page;

/* The page of results to return. If this argument is omitted, it defaults to 1. */
@property (nonatomic, copy) NSString *page;


@end
