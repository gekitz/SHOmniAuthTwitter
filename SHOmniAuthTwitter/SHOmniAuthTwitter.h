//
//  SHOmniAuthTwitter.h
//  SHAccountManagerExample
//
//  Created by Seivan Heidari on 3/24/13.
//  Copyright (c) 2013 Seivan Heidari. All rights reserved.
//

static NSString * const kOmniAuthTwitterErrorDomain                    = @"SHOmniAuthTwitter";
static NSString * const kOmniAuthTwitterErrorDomainConflictingAccounts = @"SHOmniAuthTwitterConflictingAccounts";

static const NSInteger kOmniAuthTwitterErrorCodeConflictingAccounts = 500;

@class ACAccount;

#import "SHOmniAuthProvider.h"
@interface SHOmniAuthTwitter : NSObject
<SHOmniAuthProvider>
+(void)performReverseAuthForAccount:(ACAccount *)theAccount withBlock:(SHOmniAuthAccountResponseHandler)completionBlock;
@end
