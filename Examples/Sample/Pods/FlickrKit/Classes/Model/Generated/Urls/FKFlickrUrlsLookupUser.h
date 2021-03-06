//
//  FKFlickrUrlsLookupUser.h
//  FlickrKit
//
//  Generated by FKAPIBuilder on 12 Jun, 2013 at 17:19.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAPIMethod.h"

typedef enum {
	FKFlickrUrlsLookupUserError_UserNotFound = 1,		 /* The passed URL was not a valid user profile or photos url. */
	FKFlickrUrlsLookupUserError_InvalidAPIKey = 100,		 /* The API key passed was not valid or has expired. */
	FKFlickrUrlsLookupUserError_ServiceCurrentlyUnavailable = 105,		 /* The requested service is temporarily unavailable. */
	FKFlickrUrlsLookupUserError_FormatXXXNotFound = 111,		 /* The requested response format was not found. */
	FKFlickrUrlsLookupUserError_MethodXXXNotFound = 112,		 /* The requested method was not found. */
	FKFlickrUrlsLookupUserError_InvalidSOAPEnvelope = 114,		 /* The SOAP envelope send in the request could not be parsed. */
	FKFlickrUrlsLookupUserError_InvalidXMLRPCMethodCall = 115,		 /* The XML-RPC request document could not be parsed. */
	FKFlickrUrlsLookupUserError_BadURLFound = 116,		 /* One or more arguments contained a URL that has been used for abuse on Flickr. */

} FKFlickrUrlsLookupUserError;

/*

Returns a user NSID, given the url to a user's photos or profile.


Response:

<user id="12037949632@N01">
	<username>Stewart</username> 
</user>

*/
@interface FKFlickrUrlsLookupUser : NSObject <FKFlickrAPIMethod>

/* The url to the user's profile or photos page. */
@property (nonatomic, strong) NSString *url; /* (Required) */


@end
