//
//  FKFlickrAuthOauthCheckToken.m
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrAuthOauthCheckToken.h" 

@implementation FKFlickrAuthOauthCheckToken



- (BOOL) needsLogin {
    return NO;
}

- (BOOL) needsSigning {
    return NO;
}

- (FKPermission) requiredPerms {
    return -1;
}

- (NSString *) name {
    return @"flickr.auth.oauth.checkToken";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];
	if(!self.oauth_token) {
		valid = NO;
		[errorDescription appendString:@"'oauth_token', "];
	}

	if(error != NULL) {
		if(!valid) {	
			NSDictionary *userInfo = @{NSLocalizedDescriptionKey: errorDescription};
			*error = [NSError errorWithDomain:FKFlickrKitErrorDomain code:FKErrorInvalidArgs userInfo:userInfo];
		}
	}
    return valid;
}

- (NSDictionary *) args {
    NSMutableDictionary *args = [NSMutableDictionary dictionary];
	if(self.oauth_token) {
		[args setValue:self.oauth_token forKey:@"oauth_token"];
	}

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrAuthOauthCheckTokenError_InvalidSignature:
			return @"Invalid signature";
		case FKFlickrAuthOauthCheckTokenError_MissingSignature:
			return @"Missing signature";
		case FKFlickrAuthOauthCheckTokenError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrAuthOauthCheckTokenError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrAuthOauthCheckTokenError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrAuthOauthCheckTokenError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrAuthOauthCheckTokenError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrAuthOauthCheckTokenError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrAuthOauthCheckTokenError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrAuthOauthCheckTokenError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end
