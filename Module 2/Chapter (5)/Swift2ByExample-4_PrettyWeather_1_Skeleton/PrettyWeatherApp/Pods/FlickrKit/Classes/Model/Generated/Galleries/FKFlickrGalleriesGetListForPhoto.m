//
//  FKFlickrGalleriesGetListForPhoto.m
//  FlickrKit
//
//  Generated by FKAPIBuilder on 19 Sep, 2014 at 10:49.
//  Copyright (c) 2013 DevedUp Ltd. All rights reserved. http://www.devedup.com
//
//  DO NOT MODIFY THIS FILE - IT IS MACHINE GENERATED


#import "FKFlickrGalleriesGetListForPhoto.h" 

@implementation FKFlickrGalleriesGetListForPhoto



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
    return @"flickr.galleries.getListForPhoto";
}

- (BOOL) isValid:(NSError **)error {
    BOOL valid = YES;
	NSMutableString *errorDescription = [[NSMutableString alloc] initWithString:@"You are missing required params: "];
	if(!self.photo_id) {
		valid = NO;
		[errorDescription appendString:@"'photo_id', "];
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
	if(self.photo_id) {
		[args setValue:self.photo_id forKey:@"photo_id"];
	}
	if(self.per_page) {
		[args setValue:self.per_page forKey:@"per_page"];
	}
	if(self.page) {
		[args setValue:self.page forKey:@"page"];
	}

    return [args copy];
}

- (NSString *) descriptionForError:(NSInteger)error {
    switch(error) {
		case FKFlickrGalleriesGetListForPhotoError_InvalidAPIKey:
			return @"Invalid API Key";
		case FKFlickrGalleriesGetListForPhotoError_ServiceCurrentlyUnavailable:
			return @"Service currently unavailable";
		case FKFlickrGalleriesGetListForPhotoError_WriteOperationFailed:
			return @"Write operation failed";
		case FKFlickrGalleriesGetListForPhotoError_FormatXXXNotFound:
			return @"Format \"xxx\" not found";
		case FKFlickrGalleriesGetListForPhotoError_MethodXXXNotFound:
			return @"Method \"xxx\" not found";
		case FKFlickrGalleriesGetListForPhotoError_InvalidSOAPEnvelope:
			return @"Invalid SOAP envelope";
		case FKFlickrGalleriesGetListForPhotoError_InvalidXMLRPCMethodCall:
			return @"Invalid XML-RPC Method Call";
		case FKFlickrGalleriesGetListForPhotoError_BadURLFound:
			return @"Bad URL found";
  
		default:
			return @"Unknown error code";
    }
}

@end
