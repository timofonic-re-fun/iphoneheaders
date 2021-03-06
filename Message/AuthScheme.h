/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Message.framework/Message
 */

#import <Foundation/NSObject.h>


@interface AuthScheme : NSObject {
}
// inherited: +(void)initialize;
+(id)knownSchemes;
+(void)registerSchemeClass:(Class)aClass;
+(id)schemeWithName:(id)name;
+(id)authSchemesForAccount:(id)account connection:(id)connection;
// inherited: -(id)retain;
// inherited: -(unsigned)retainCount;
-(void)release;
-(Class)connectionClassForAccountClass:(Class)accountClass;
-(Class)authenticatorClassForAccountClass:(Class)accountClass;
-(unsigned)defaultPortForAccount:(id)account;
-(BOOL)hasEncryption;
-(BOOL)canAuthenticateAccountClass:(Class)aClass connection:(id)connection;
-(id)authenticatorForAccount:(id)account connection:(id)connection;
-(BOOL)requiresPassword;
-(BOOL)requiresDomain;
-(id)name;
-(id)humanReadableName;
@end

